/*
 A B C
 A B C
 A B C
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter number";
    cin>>n;

    int i,j;
    for(i=1;i<=n;i++)
    {
        char ch='A';
        for(j=1;j<=n;j++)
        {
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
}