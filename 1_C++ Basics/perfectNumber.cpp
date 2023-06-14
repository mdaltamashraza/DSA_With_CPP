//perfect number are those whose sum of divisor are equal to the num (except number itself)
// e.g 28 it is divisble by 1,2,4,7,14 so by adding 1+2+4+7+14=28 so, 28 is perfect number

#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter number to check it is perfect or not:";
    cin>>num;

    
    int sum=0;

    for(int i=1;i<num;i++)
    {
        int rem= num%i;
        if(rem==0)
        {
            sum=sum+i;
        }
    }
    if(sum==num)
    {
        cout<<"Perfect number";
    }
    else{
        cout<<"Not perfect number";
    }
}