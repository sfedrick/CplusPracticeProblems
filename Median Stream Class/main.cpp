#include "basicheader.h"
// main() is where program execution begins.


int main() {
   MedianFinder* obj = new MedianFinder();
   // obj->addNum(5);
   // obj->addNum(4);
   // obj->addNum(2);
   obj->print_array();
   cout<< obj -> get_array().size()<<endl;
}
