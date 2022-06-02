#include "meta.hh"
using namespace std;
// main() is where program execution begins.
string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

// this function prints out the values of an integer vector 
// it iterates through the vector using a pointer 



/*
 * Complete the 'formingMagicSquare' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY s as parameter.
 */
int formingMagicSquare(vector<vector<int>> s) {
   vector<vector<int>> A{{1,2,3},{4,5,6},{7,8,9}};
   vector<vector<int>> B{{1,2,3},{4,5,6},{7,8,9}};
   vector<vector<int>> C{{1,2,3},{4,5,6},{7,8,9}};
   vector<vector<int>> D{{1,2,3},{4,5,6},{7,8,9}};
   vector<vector<int>> E{{1,2,3},{4,5,6},{7,8,9}};
   vector<vector<int>> F{{1,2,3},{4,5,6},{7,8,9}};
   vector<vector<int>> G{{1,2,3},{4,5,6},{7,8,9}};
   vector<vector<int>> H{{1,2,3},{4,5,6},{7,8,9}};
   vector<vector<vector<int>>> MagicSquares{{A,B,C,D,E,F,G,H}};
   return 1;

}



int main()
{
   cout<<"enter magic square"<<endl;
   vector<vector<int>> s{{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> s2{{1,2,3},{4,5,6},{7,8,8}};
   vector<int> A{4,5,3};
   vector<int> B{2,2,3};
   vector<int> C{};
   C.resize(A.size());
   C=subtractVectors(A,B);
   C=absoluteVector(C);
   cout<<"compute L1 2d vector norm"<<endl;
   cout<<L1vectornorm2D(s,s2)<<endl;
   
   //cout<<L1vectornorm(A,B);
  // printVector(absoluteVectors()); 
   //int result = formingMagicSquare(s);

   return 0;
}


