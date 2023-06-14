//print odd no between 5 to 50

#include<iostream>
using namespace std;
int main()
{
    int i;

    for(i=5;i<50;i++)
    {
        if(i%2==0)
        {
            continue;
        }
        else
        {
            cout<<i<<endl;
        }
    }
}