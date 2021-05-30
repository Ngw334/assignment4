#include <iostream>
using namespace std;

void result(double m){
  string grade;
  if(m >= 91 && m <=100){
    grade = "AA";
  }
  else if(m >= 81 && m <=90){
    grade = "AB";
  }
  else if(m >= 71 && m <=80){
    grade = "BB";
  }
  else if(m >= 61 && m <=70){
    grade = "BC";
  }
  else if(m >= 51 && m <=60){
    grade = "CD";
  }
  else if(m >= 41 && m <=50){
    grade = "DD";
  }
  else{
    grade = "Fail";
  }
  
  cout<<"Your result grade is : "<< grade << endl;
}

int main()
{
  for(string i ; ;){
    double marks;
    cout<<"Give me your marks out of 100 : ";
    cin>> marks;
  
    if(marks > 100 || marks < 0){
      cout<< "Give proper positive marks out of 100 !! \n\n";
      continue;
    }
    else{
      result(marks);
      break;
    }
  }
  
  
  
  
}