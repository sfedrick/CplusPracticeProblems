//prints a vector 
using namespace std;
void printVector(vector<int> printVec){
   cout<<"( ";
   for(vector<int>::iterator it=printVec.begin(); it!=printVec.end();++it)
      cout<<' '<<*it;
   cout<<" )";
   cout<<endl;
}
//prints a 2D vector
void printVector2D(vector<vector<int>> printVec){
   for(vector<vector<int>>::iterator it=printVec.begin(); it!=printVec.end();++it){
      printVector(*it);
      cout<<endl;
   }
}
//Adds elements of 2D vectors 
vector<int> addVectors(vector<int> A,vector<int> B){
  vector<int> C;
  C.resize(A.size());
  transform(A.begin(),A.end(),B.begin(),C.begin(),plus<int>());
  return C;
}
//subtracts elements of 2D vectors 
vector<int> subtractVectors(vector<int> A,vector<int> B){
  vector<int> C;
  C.resize(A.size());
  transform(A.begin(),A.end(),B.begin(),C.begin(),minus<int>());
  return C;
}

//helper unary operator to get the absolute value of a vector 
int absolutehelper (int i) { 
   if(i<0){
      return -1*i;
   }
   else{
      return i;
   }
}
//finds the absolute value of a vector 
vector<int> absoluteVector(vector<int> A){
 transform(A.begin(),A.end(),A.begin(),absolutehelper);
 return A;
}

int sumVectorElements(vector<int> A){
 int C=0;
  for(vector<int>::iterator it=A.begin();it!=A.end();++it){
   C+=*it;
  }
  return C;
}

int L1vectornorm(vector<int> A, vector<int> B){
   int Norm=0;
   vector<int> C(A.size(),0);
   C=subtractVectors(A,B);
   C=absoluteVector(C);
   Norm=sumVectorElements(C);
   return Norm;
}
// vector<int> subtractVectors2(vector<int>* A,vector<int>* B){
//   transform((*A).begin(),(*A).end(),(*B).begin(),(A*).begin(),minus<int>());
//   return *A;
// }

int L1vectornorm2D(vector<vector<int>> A, vector<vector<int>> B){
    int Norm=0;
    transform(A.begin(),A.end(),B.begin(),A.begin(),subtractVectors);
    transform(A.begin(),A.end(),A.begin(),absoluteVector);
    
    for(vector<vector<int>>::iterator it=A.begin(); it!=A.end(); ++it){
        Norm=Norm+sumVectorElements(*it);
    }
    return Norm;
}

