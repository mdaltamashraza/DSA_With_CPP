//Binary to decimal

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter binary bits to get its equivalent decimal no:";
    cin>>n;

    int i=0;
    int ans=0;
    while(n!=0)
    {
        int digit= n%10;
        if(digit==1)
        {
            ans=ans+pow(2,i);
        }
        n=n/10;
        i++;
    }
    cout<<"decimal is:" <<ans;
}