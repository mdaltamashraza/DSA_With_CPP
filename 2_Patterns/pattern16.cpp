/*
 1
 2 1
 3 2 1
 4 3 2 1
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter number:";
    cin>>n;

    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<i-j+1; //all test case passed
        }
        cout<<endl;
    }
}