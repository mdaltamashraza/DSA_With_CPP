/*program for combination nCr
  nCr= n!/r!*(n-r)!
*/

#include<iostream>
using namespace std;

int factorial(int num)
{
    int fact=1;
    for(int i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    return fact;
}

int nCr(int n, int r)
{
    int num= factorial(n);
    int denom= factorial(r)* factorial(n-r);
    
    int ans= num/denom;

    return ans;
}

int main()
{
    int n,r;
    cout<<"enter the value of n:"<<endl;
    cin>>n;

    cout<<"enter the value of r:"<<endl;
    cin>>r;

    cout<<"answer(nCr) is:"<<nCr(n,r)<<endl;
}