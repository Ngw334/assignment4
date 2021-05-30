#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0
double volumeSphere(double r)
{
  double v = (1.33)*(r * r * r)*(3.14) ;
  cout << v;
}



int main()
{
  double radius;
  cout<< "Give me the radius of the sphere:  ";
  cin>> radius;
 
  
  volumeSphere(radius);
    
}    