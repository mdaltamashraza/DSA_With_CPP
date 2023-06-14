/*
  1
  2 3
  3 4 5
  4 5 6 7
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
        int j=1;
        int count=i; //taking count as third variable to store i value and then increase in the further loops
        while(j<=i)
        {
            cout<<count;
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
}