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
   int cost=-1;
   int newcost=-1;
   vector<vector<int>> optimal_square{{0,0,0},{0,0,0},{0,0,0}};
   vector<vector<int>> A{{8,1,6},{3,5,7},{4,9,2}};
   vector<vector<int>> B{{6,1,8},{7,5,3},{2,9,4}};
   vector<vector<int>> C{{4,9,2},{3,5,7},{8,1,6}};
   vector<vector<int>> D{{2,9,4},{7,5,3},{6,1,8}};
   vector<vector<int>> E{{8,3,4},{1,5,9},{6,7,2}};
   vector<vector<int>> F{{4,3,8},{9,5,1},{2,7,6}};
   vector<vector<int>> G{{6,7,2},{1,5,9},{8,3,4}};
   vector<vector<int>> H{{2,7,6},{9,5,1},{4,3,8}};
   vector<vector<vector<int>>> MagicSquares{{A,B,C,D,E,F,G,H}};
   for (vector<vector<vector<int>>>::iterator it=MagicSquares.begin();it!=MagicSquares.end();++it){
      newcost=L1vectornorm2D(s,*it);
      if(cost==-1){
         cost=newcost;
         optimal_square=*it;
      }
      else if(newcost<cost){
         cost=newcost;
         optimal_square=*it;
      }
   }
   cout<<"optimal magic square"<<endl;
   printVector2D(optimal_square);
   return cost;}



int main()
{
   cout<<"enter magic square"<<endl;
   vector<vector<int>> s{{4,9,2},{3,5,7},{8,1,5}};
   // C.resize(A.size());
   // C=subtractVectors(A,B);
   // C=absoluteVector(C);
   // cout<<"compute L1 2d vector norm"<<endl;
   // cout<<L1vectornorm2D(s,s2)<<endl;
   
   //cout<<L1vectornorm(A,B);
  // printVector(absoluteVectors()); 
   int result = formingMagicSquare(s);
   cout<<"result"<<endl;
   cout<<result<<endl;
   return 0;
}


