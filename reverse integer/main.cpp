#include "header.h"

// main() is where program execution begins.
int main() {
   vector<double> list;
   vector<double>::iterator it;
   
   
   
   int x = 123;
   double reverse=0;
   
   int place;
  
   while (x!=0){
    place = x%10;
    list.push_back(place);
    x = int(x/10);

   }

   int numplace =list.size() -1;

   for (double i: list){
    reverse = reverse + i*pow(10,numplace);
    numplace--;

   }
   if(reverse>(pow(2,31)-1) || reverse<(-pow(2,31))){
     return 0;
   }
   else{
    return int(reverse);
   }

    
//    return 0;
}
