#include <iostream>
using namespace std;

int fact(int n){
  
  if(n==1){
    return 1;
  }
  return n*fact(n-1);
}


int sumNthNumber(int n){
  if(n==0){
    return 0;
  }
  
  return n+sumNthNumber(n-1);
}

int powerOfNumber(int power,int n){
  if(n==1){
    return power;
  }
  
  return power*powerOfNumber(power,n-1);
}

int sumOfSquares(n) {
    if (n === 1) return 1;
    return n * n + sumOfSquares(n - 1); 
}

int main() 
{
   int n;
   n=5;
   if(n<0){
     cout << "Factoril not possible";
   }
   cout<<fact(n) << endl;
   
   cout<<sumNthNumber(n) << endl;
   cout << powerOfNumber(2,5);
   cout << sumOfSquares(5);
  
}

