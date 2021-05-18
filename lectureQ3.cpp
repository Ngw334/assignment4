#include <iostream>
using namespace std;


void results()
{
  string name; 
  string marks;
  cout<< "Give the names and marks of the students : \n";
  cout<< "Name : ";
  cin>> name;
  
  cout<<"Marks : ";
  cin>> marks;
  
  cout<< name <<" got "<< marks << " out of 30 "<< endl;
  cout<<"\n";

}

int main()
{
  results();
  results();
  results();
}