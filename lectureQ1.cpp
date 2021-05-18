#include <iostream>

using namespace std;

int isEven(int in1)
  {
    for(int i=1; i < in1; i++)
    {
      if(i % 2==0)
      {
        cout<< i << endl;
        continue;
      }
    }
  }

int main()
{
  int in1;
  cout<< "Give value n to print all the even no. between 1 and n : ";
  cin>> in1;
  cout<< endl;
  
  isEven(in1);
}





