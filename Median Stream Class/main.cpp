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


int binarySearch(vector<int> arr, int item, int low, int high) {
   
   
}

int insert_pos_binary(vector<int> y, int start,int end, int num){
      int middle = ((end-start)/2)+start;
  
        if(start == end){
            if(num > y[start]){
                return start +1;
            }
            else{
                return start;
            }
        }
        else if(end-start==1){
            if(num > y[end]){
                return end +1;
            }
            else if (num > y[start]) {
                return end;
            }
            else {
               return start;
            }

        }
        else if( y[middle]> num){
            end = middle ;
        }
        else if (y[middle]< num){
            start = middle ;

        }
        else{
            start = middle;
            end = middle;
        }
   cout<< "start: "<< start <<", end: "<< end<<endl;
   return insert_pos_binary(y,start,end, num);
   
   
}

int main() {
   // vector <int> test ={1,2,3};
   // MedianFinder* obj = new MedianFinder();
   // test_med(test);
   
 vector <int> test ={1,2};
auto it = test.begin();
int insertme=3;
int insertnum = insert_pos_binary(test, 0, test.size()-1,insertme);


cout<<insertnum<<endl;
test.insert(it+insertnum,insertme);
print_array(test);
}
