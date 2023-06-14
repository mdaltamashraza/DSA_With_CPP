/*
fibonacci series 0,1,1,2,3,5,8,13,21,34,55,....
next term= (n-1)th-(n-2)th term
*/

#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter number till you want fibonacci series:";
    cin>>num;

    cout<<"fibonacci series is:"<<endl;
    int a=0,b=1;
    cout<<a<<" "<<b<<" ";

    for(int i=2;i<num;i++)
    {
        int NextNumber=a+b; //to store next number
        cout<<NextNumber<<" "; //to print the next number

        a=b; //storing value of b in a
        b=NextNumber; //storing value of Nextnumber in b, so that it can find NextNumber by a+b
    }
}