//taking input until odd number entred by the user

#include<iostream>
using namespace std;
int main()
{
  int num;

  while(1) //infinite loop, this loop will run until break statement is not executed
  {
     cout<<"enter number:";
     cin>>num;

     if(num%2!=0)
     {
        break;
     }
  }
  cout<<"you have entered odd number"<<endl;
  cout<<"thank you"<<endl;
}