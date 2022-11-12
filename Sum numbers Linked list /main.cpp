#include "basicheader.h"

void printLink(ListNode *l1){
    int end = l1 ->next ->val;
    end = 5;
    while (end!=0){
        cout<<l1->val<<endl;
        //end = l1->next->val;
        //l1 = l1 -> next;
        end--;
    }  
}

void array2LL( int list[]){
    int size = *(&list + 1) - list;
    cout<< size<<endl;
    for (int i = 0; i<4; i++){
        cout << "item in list"<<endl;
       
        cout<< list[i]<<endl;
    }
    list[0]=223;
}
int main() {
    ListNode *l1 = new ListNode(2);
    printLink(l1);
    return 0;
}