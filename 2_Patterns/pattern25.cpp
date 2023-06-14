/*
 D
 C D
 B C D
 A B C D
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
        char start='A'+n-i; //finding starting character
        for(j=1;j<=i;j++)
        {
            cout<<start;
            start++;
        }
        cout<<endl;
    }
}