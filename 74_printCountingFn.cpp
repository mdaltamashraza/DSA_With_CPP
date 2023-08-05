//printing counting from 1 to N using functions

#include<iostream>
using namespace std;

void printCounting(int num) //formal parameter
{
    //function Body
    for(int i=1;i<=num;i++)
    {
        cout<<i<<endl;
    }
}

int main()
{
    int num;
    cout<<"enter number:";
    cin>>num;
   
   //function calling
    printCounting(num); //actual paramater
}