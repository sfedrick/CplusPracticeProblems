#include "basicheader.h"
// main() is where program execution begins.
void print_array(vector<int> y){
        for( const int x:y){
            cout<<" "<<x<<" ";
        }
        cout<<endl;
        };

void test_med(vector<int> y){
   MedianFinder* obj = new MedianFinder();
   for( const int x:y){
            if(x){
                obj->addNum(x);
            }
            cout<<"add:"<<x <<" Median:"<<obj -> findMedian()<<endl;
            cout<< "array : ";
            obj -> print_array();
            
        }
}




int main() {
  // vector <int> test ={6,10,2,6,5,0,6,3,1,0,0};
  vector <int> test ={1,2,3};
   //[6.00000,8.00000,6.00000,6.00000,6.00000,5.50000,6.00000,5.50000,5.00000,4.00000,3.00000]
   MedianFinder* obj = new MedianFinder();
   test_med(test);
   // obj->addNum(6);
   // obj->addNum(10);
   // obj->addNum(2);
   // obj->addNum(6);
   //  obj->addNum(5);
   //  obj->addNum(0);
   // obj->print_array();
   // cout<< obj -> findMedian()<<endl;
   // vector<int> med_array = {};
   // auto it = med_array.begin();
   // med_array.insert(it,6);
   // it = med_array.begin();
   // med_array.insert(it+1,8);
   // print_array(med_array);



}
