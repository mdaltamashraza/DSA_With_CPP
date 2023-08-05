//program to calculate number of set bits in a&b e.g a=3&b=5 a=011,b=101 so no of set bits are 4

#include<iostream>
using namespace std;

int SetBitsA(int a)
{
   int count=0;
   while(a!=0)
   {
    if(a&1)
    {
        count++;
    }
    a=a>>1;
   }

   return count;
}

int SetBitsB(int b)
{
    int count=0;
    while(b!=0)
    {
        if(b&1)
        {
            count++;
        }

        b=b>>1;
    }

    return count;
}

int main()
{
    int a,b;
    cout<<"enter the value of a & b to count set bits"<<endl;
    cin>>a>>b;

    int ans1=SetBitsA(a);
    int ans2= SetBitsB(b);

    cout<<"number of set bits in a:"<<ans1<<endl;
    cout<<"number of set bits in b:"<<ans2<<endl;

    int answer= ans1+ans2;
    
    cout<<"total number of set bits in a & b are:"<<answer<<endl;
}