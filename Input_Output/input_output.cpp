#include <iostream>
#include <cstdio>
#include<cmath>
#include <iomanip>
using namespace std;
// main() is where program execution begins.
int main() {
   int i;
   long int l;
   char ch;
   float f;
   double d;
   scanf("%d %ld %c %f %lf", &i,&l,&ch,&f,&d);
   
   printf("%d\n%ld\n%c\n%.3f\n%.9lf\n",i,l,ch,f,d);
   // 14049.30493
   // 14049.304930000
   // double f=14049.30493;
   // printf("%.9lf\n",f);

}
