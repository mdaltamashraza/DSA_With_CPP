/*
  A A A
  B B B
  C C C
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
        char ch='A'+i-1;
        for(j=1;j<=n;j++)
        {
            cout<<ch;
        }
        cout<<endl;
    }
}