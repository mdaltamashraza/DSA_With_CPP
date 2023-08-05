//program to calculate AP term (3*n+7)

#include<iostream>
using namespace std;

int APterm(int num)
{
    int ans;
    ans= (3*num+7);
    return ans;
}

int main()
{
    int num;
    cout<<"enter the number to check APth Term:"<<endl;
    cin>>num;
    
    int ans=APterm(num);
    cout<<"answer is:"<<ans<<endl;

}