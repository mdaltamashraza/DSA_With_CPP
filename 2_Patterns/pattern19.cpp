/*
 A B C
 D E F
 G H I
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter number:";
    cin>>n;

    int i,j;
    char ch='A';
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }

}