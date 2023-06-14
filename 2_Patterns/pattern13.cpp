/*
  1
  2 3
  4 5 6
  7 8 9 10
  11 12 13 14 15
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of rows:";
    cin>>n;

    int i,j,count=1;
    i=1;
    while(i<=n)
    {
        j=1;
        while(j<=i)
        {
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
}