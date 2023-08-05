//checking number is even or odd with help of function

#include<iostream>
using namespace std;

// 1-> even number
// 0-> Odd number
bool isEven(int a) //bool type return value
{
    if(a&1) //a&1 will tell that if the number is odd or not
    {
        return 0;
    }
    else{
        return 1;
    }
}

int main()
{
  int num;
  cout<<"enter number:";
  cin>>num;

  if(isEven(num))
  {
    cout<<"even number"<<endl;
  }
  else
  {
    cout<<"odd number"<<endl;
  }
}