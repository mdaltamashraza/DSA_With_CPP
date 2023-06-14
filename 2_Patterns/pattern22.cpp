/*
 A
 B C
 D E F
 G H I J
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter number:";
    cin>>n;

    int i,j;
    char value='A';
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<value;
            value++;
        }
        cout<<endl;
    }
}