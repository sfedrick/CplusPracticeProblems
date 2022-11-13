#include "basicheader.h"
    

    
    MedianFinder::MedianFinder(){
        
    };

     void MedianFinder::print_array(){
        for( const int x:array){
            cout<<" "<<x<<" ";
        }
        cout<<endl;
        };
    vector<int> MedianFinder::get_array(){
     
        return array;
    };

    
    void MedianFinder::addNum(int num) {
        if(array.size()==0){
            auto it = array.begin();
            array.insert(it,num);
        }
        
        
    }
        
    double MedianFinder::findMedian() {
        double x=1.0;
        return x;
            
    }


 