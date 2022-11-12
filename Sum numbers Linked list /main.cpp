#include "basicheader.h"

void printLink(ListNode *l1){
    int end = l1 ->next ->val;
    end = 1;
    while (l1){
        cout<<l1->val<<",";
        l1= l1->next;
    }  
    cout<<endl;
}


ListNode * reverseLL( ListNode *l1){
    ListNode *reversed = nullptr;
    while(l1){
        reversed = new ListNode(l1->val,reversed);
        l1 = l1->next;
    }

    return reversed;
}

ListNode * array2LL( int* begin, int* end){
   ListNode *l1 = new ListNode(*(end-1));
   ListNode *current ;

   int size = end-begin;
   for (int i=2; i<size+1; i++){
        l1 = new ListNode(*(end-i),l1);
   }
 
   return l1;
}

ListNode * sumLL( ListNode *l1, ListNode *l2){
    l1= reverseLL(l1);
    l2= reverseLL(l2);
    ListNode *l3 = nullptr;
    int currentSum;
    int rollover =0;
    while (l1 || l2){
        
        if(l1 && l2){
            currentSum = l1->val + l2->val;
            l1 = l1->next;
            l2 = l2->next;
        }
        else if(l1 && !l2){
            currentSum = l1->val;
            l1 = l1->next;
        }
        else if(!l1 && l2){
            currentSum = l2->val;
            l2 = l2->next;

        }
        currentSum = currentSum+rollover;
        if (currentSum>9){
            currentSum= currentSum -10;
            rollover =1;
        }
        else{
            rollover =0;
        }
        l3 = new ListNode(currentSum,l3);
        
    } 
    if(rollover ==1) {
        l3 = new ListNode(1,l3);
    }
  return l3;
}
int main() {
    array<int,2> a= {5,2};
    array<int,2> b= {5,2};

    ListNode *l1= array2LL( a.begin(), a.end());
    ListNode *l2= array2LL( b.begin(), b.end());
    ListNode *l3= sumLL( l1,l2);
    printLink(l1);
    printLink(l2);
    printLink(l3);
    cout<<2%10<<endl;
    return 0;
}