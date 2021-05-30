#include <iostream>
using namespace std;

void maxMinNum(double x,double y,double z)
{
  if(x > y && x > z){
    cout<<"Maximum No. : "<< x << endl;
    if(y > z){
      cout << "Minimum No. : "<< z << endl;
    }
    else{
      cout<<"Minimum No. : "<< y<< endl;
    }
  }
  
  if(y > x && y > z){
    cout<<"Maximum No. : "<< y << endl;
    if(x > z){
      cout << "Minimum No. : "<< z << endl;
    }
    else{
      cout<<"Minimum No. : "<< x<< endl;
    }
  }
  
  if(z > y && z > x){
    cout<<"Maximum No. : "<< z << endl;
    if(y > x){
      cout << "Minimum No. : "<< x << endl;
    }
    else{
      cout<<"Minimum No. : "<< y<< endl;
    }
  }
}

int main()
{
  double in1,in2,in3;
  cout<< "Give three input numbers :\n";
  cout<< "Input 1 :";
  cin>> in1;
  cout<< endl;
  
  cout<< "Input 2 :";
  cin>> in2;
  cout<< endl;
  
  cout<< "Input 3 :";
  cin>> in3;
  cout<< endl;
  
  maxMinNum(in1,in2,in3);
    
}