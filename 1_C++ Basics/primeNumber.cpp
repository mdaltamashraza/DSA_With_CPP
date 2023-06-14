//check whether a number is prime or not

#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter number:";
    cin>>num;

    int count=0;     //we can also use bool true=1 then check conditions
    int i;

    for(i=1;i<=num;i++)  //here we have check conditions for i<num and initialize i=2
    {
        if(num%i==0)
        {
            count++;  // true=0
        }
    }
    if(count==2) //true=1
    {
        cout<<"Prime Number"<<endl;
    }
    else
    {
        cout<<"not a Prime Number"<<endl;
    }
}