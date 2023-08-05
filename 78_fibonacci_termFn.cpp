//program to print fibonacci series term value for the input number

#include<iostream>
using namespace std;

int fibonacci(int num)
{
    int a=0,b=1;
    for(int i=2;i<num;i++)
    {
        int NextNumber=a+b;

        a=b;
        b=NextNumber;
    }
    return b;
}

int main()
{
    int num;
    cout<<"enter number to print fibonaaci term value:"<<endl;
    cin>>num;

    cout<<"fibonacci number of given term is:"<<fibonacci(num)<<endl;
}