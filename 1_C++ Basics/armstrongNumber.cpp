// armstrong number: whose sum of every digit cube is = original number e.g 153=> 1^3+5^3+3^3 =153 so it is armstrong

#include<iostream>
using namespace std;
int main()
{
    int num,original;
    cout<<"enter number to check for Armstrong:";
    cin>>num;

    original=num;

    int sum=0;

    while(num!=0)
    {
        int rem=num%10;

        sum= sum+(rem*rem*rem);

        num=num/10;

    }

    if(original==sum)
    {
        cout<<"Armstrong number";
    }
    else
    {
        cout<<"Not Armstrong number";
    }
}