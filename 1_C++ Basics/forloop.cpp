//concept of for loop
//print 1 to N

#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter value to print number";
    cin>>num;

    cout<<"printing values from 1 to N"<<endl;
    int i;
    for(i=1;i<=num;i++)
    {
        cout<<i<<endl;
    }
}