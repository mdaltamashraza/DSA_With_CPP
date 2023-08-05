// prime number program using fuction

#include<iostream>
using namespace std;

// 1-> Prime number
// 0-> Not Prime number
bool isPrime(int num)
{
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            return 0;
        }
        
    }
    return 1; 
}

int main()
{
    int num;
    cout<<"enter the number:";
    cin>>num;

    if(isPrime(num))
    {
        cout<<"prime number";
    }
    else{
        cout<<"not a prime number";
    }
}