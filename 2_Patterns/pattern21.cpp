/*
 A
 B B
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
        for(j=1;j<=i;j++)
        {
            char ch='A'+i-1;
            cout<<ch;
        }
        cout<<endl;
    }
}