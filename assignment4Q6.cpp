#include <iostream>
using namespace std;

int squareRoot(int n){
  for(int i = 2;i < n; i++){
    if((n % i == 0) && (n / i == i)){
      cout<< i;
      break;
    }
    else{
      continue;
    }
  }
}

int main()
{
   int num;
   cout<< "Give a integer no. to find its square root : ";
   cin>> num;
   
   squareRoot(num); 
}