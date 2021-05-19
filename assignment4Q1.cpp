#include <iostream>
using namespace std;

void isPrime(int in1)
{
  for(int c = 2; c < in1 ; c++)
    {
      if(in1 % c == 0)
      {
        cout<< in1 << " is not a prime no." << endl;
        break;
      }
      else
      {
        cout<< in1 << " is prime no. " << endl;
        break;
      }
    }
}

int main()
{
  int in1;
  cout<< "Give a no to see if it is prime : ";
  cin>> in1;
  
  isPrime(in1);
}