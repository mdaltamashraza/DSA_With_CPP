/*
  A
  B C
  C D E
  D E F G  
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter number:";
    cin>>n;

    int i,j;
    char ch;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            ch='A'+i+j-2;
            cout<<ch;
        }
        cout<<endl;
    }
}