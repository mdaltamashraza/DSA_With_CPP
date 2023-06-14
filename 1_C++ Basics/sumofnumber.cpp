//sumo of number from 1 to N
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter number:";
    cin>>num;
    int i,sum=0;
    for(i=1;i<=num;i++)
    {
        sum=sum+i;
    }
    cout<<"sum is "<<sum<<endl;
}