#include <iostream>
using namespace std;
int main(){
    int cnt = 5;        // how many elements in the array, in this case MAX
    int arr[cnt];
    int *p = &arr[0];    // p is a pointer to an integer and is initialize to the address of the first
                      // element of the array. So now *p is the same as arr[0] and p is same as &arr[0
// iterate over all elements. stop when cnt == 0
 cout<<"enter in your numbers \n";
while (cnt) {
   cin>>*p;
    cnt --;  
    p++;    
}
 cout<<"output ofyour numbers \n";
for( int i =0; i<5; i++){
    cout<<arr[i]<<"\n";
}
return 0;
};