//basic implementation of switch statement

#include<iostream>
using namespace std;
int main()
{
    int num =1;
    cout<<endl;
    switch(num) //switch expression
    {
        case 1: cout<<"number is 1";
        break;

        case 2: cout<<"number is 2";
        break;                                 //continue statement can't be used with switch because continue statement is only used with loop and switch is not loop
                                

        default: cout<<"invalid number";
    }
}