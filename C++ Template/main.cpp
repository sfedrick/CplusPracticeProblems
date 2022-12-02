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
               current = current.substr(n, i-n);
               if(newlargest>largest){
                  largest = newlargest;
                  newlargest = 0;
                  
               }

            }
        }
        if(newlargest>largest){
          largest = newlargest;
        }
         
        return largest;
 }

// main() is where program execution begins.
int main() {
   int result= lengthOfLongestSubstring("bbtablud");
   cout<< result<<endl;
   string s =  " ";
   cout<<s.length()<<endl;
   return 0;
}
