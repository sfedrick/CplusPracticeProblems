#include "header.h"

 int lengthOfLongestSubstring(string s) {
        int size = s.length();
        string current = "";
        int largest = 0;
        int newlargest =0;
        std::string::size_type n;
        if( size ==1){
         return 1;
        }
        for( int i=0; i<size; i++){
            n = current.find(s[i]);
            cout<< "index "<< i<<endl;
            cout<< current<<endl;
            // if current character is not in the current string
            if(n == std::string::npos){
               current = current + s[i];
               
               newlargest = current.length();
            }
            else{
               cout<< "letter exists in current "<<endl;
               current = current.substr(n+1, i-n) +s[i];
               if(newlargest>largest){
                  largest = newlargest;
                  newlargest = 0;
                  
               }

            }
        }
        cout<< "out of loop"<<endl;
        cout<< current<<endl;
        if(newlargest>largest){
          largest = newlargest;
        }
         
        return largest;
 }

// main() is where program execution begins.
int main() {
   int result= lengthOfLongestSubstring("au");
   cout<< result<<endl;
  
   // string current =  " ";
   // std::string::size_type n;
   // n = current.find("b");
   // cout<<s.length()<<endl;
   return 0;
}
