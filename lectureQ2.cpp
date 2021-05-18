#include <iostream>
using namespace std;

int factorial(int in1)
{
  int result = 1;
  for(int i= 1; i <= in1 ; i++)
  {
    result *= i;
  }
  cout<< result;
}

int main()
{
  int in1;
  cout<< "Give a no. upto which u want to calculate factorial : ";
  cin>> in1;
  
  factorial(in1);
}