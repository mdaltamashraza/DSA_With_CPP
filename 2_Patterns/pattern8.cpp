/*
  1 2 3 4
  1 2 3 4
  1 2 3 4
  1 2 3 4
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of rows:";
    cin>>n;

    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j;
        }
       cout<<endl;
    }
}