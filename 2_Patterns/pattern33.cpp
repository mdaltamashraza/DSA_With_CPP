/*
   1
  121
 12321
1234321
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter number:";
    cin>>n;
    
    int i=1;
    while(i<=n)
    {
        int space=n-i;
        while(space)
        {
            cout<<" ";
            space--;
        }
        int j=1;
        while(j<=2*i-1)
        {
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
}