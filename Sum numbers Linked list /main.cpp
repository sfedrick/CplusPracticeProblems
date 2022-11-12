#include "basicheader.h"

void printLink(ListNode *l1){
    int end = l1 ->next ->val;
    end = 1;
    while (l1){
        cout<<l1->val<<endl;
        l1= l1->next;
    }  
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
  return l1;
}
int main() {
    array<int,5> a= {1,2,3,4,5};
    array<int,5> b= {1,2,3,4,5};

    ListNode *l1= array2LL( a.begin(), a.end());
    printLink(l1);
    return 0;
}