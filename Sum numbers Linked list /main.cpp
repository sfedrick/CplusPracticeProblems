#include "basicheader.h"

void printLink(ListNode *l1){
    int end = l1 ->next ->val;
    end = 1;
    while (l1){
        cout<<"pointer value: "<<l1<<endl;
        cout<<l1->val<<endl;
        l1= l1->next;
    }  
    cout<<"pointer value: "<<l1<<endl;
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
    ListNode *l2 = new ListNode(0);
    ListNode *l1 = new ListNode(2,l2);
    
    printLink(l1);
    return 0;
}