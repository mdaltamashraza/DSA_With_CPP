/*
 A B C
 B C D
 C D E
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter number:";
    cin>>n;

    int i,j;
    char alphabet;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            alphabet= i+j+'A'-2; //can also be done by finding starting character by 'A'+n-i(formula is different but logic for finding starting character)
            cout<<alphabet;
        }
        cout<<endl;
    }
}