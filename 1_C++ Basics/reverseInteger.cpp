//reverse the integer
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number to reverse:";
    cin>>n;

    int answer=0;
    while(n!=0)
    {
        int digit= n%10;
        answer= (answer*10)+digit;
        n= n/10;
    }
    cout<<"reverse is:"<<answer<<endl;
}