#include "basicheader.h"
    

    
    MedianFinder::MedianFinder(){
        
    };

     void MedianFinder::print_array(){
        for( const int x:med_array){
            cout<<" "<<x<<" ";
        }
        cout<<endl;
        };

    vector<int> MedianFinder::get_array(){
     
        return med_array;
    };

    int MedianFinder::insert_pos( int num){
        int insert_num = med_array.size();
        int location = 0;
        for(int x:med_array){
            if(num<=x){
                insert_num = location;
                break;
            }
            location++;
        }
        return insert_num;

    };
    
    void MedianFinder::addNum(int num) {
        int location = (*this).insert_pos(num);
        auto it = med_array.begin();
        if(med_array.size()==0){
            med_array.insert(it,num);
        }
        else{
            med_array.insert(it+location,num);
        }
        
        
    }
        
    double MedianFinder::findMedian() {
        double median = -1;
        if(med_array.size() == 0){
            median = NULL;
        }
        else if( med_array.size()%2 == 0){
            int start = (med_array.size()/2)-1;
            int end= start+1;
            median = double(med_array[start]+ med_array[end])/2.0;
            
            
        }
        else{
            median = med_array[int(med_array.size()/2)];

        }
        double x=1.0;

        return median;
            
    }


 