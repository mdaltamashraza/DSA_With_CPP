/*
  1
  2 3
  3 4 5
  4 5 6 7
  without third variable
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
            cout<<i+j-1;
        }
        cout<<endl;
    }
}