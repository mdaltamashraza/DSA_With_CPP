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
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            char ch='D'+j-i;
            cout<<ch;
        }
        cout<<endl;
    }
}