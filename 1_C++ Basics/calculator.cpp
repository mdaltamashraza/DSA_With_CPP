//Calculator program

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter the number of a:"<<endl;
    cin>>a;

    cout<<"enetr the number of b:"<<endl;
    cin>>b;

    char op;
    cout<<"enter the operation you want (+,-,*,/,%)"<<endl;
    cin>>op;

    switch(op)
    {
        case '+': cout<<"addition is:"<< (a+b) <<endl;
        break;

        case '-': cout<<"subtraction is:"<< (a-b) <<endl;
        break;

        case '*': cout<<"Multiplication is:"<< (a*b) <<endl;
        break;

        case '/': cout<<"division is:" <<(a/b) <<endl;
        break;

        case '%': cout<<"modulus(remainder) is"<< (a%b) <<endl;
        break;

        default: cout<<"invalid input of operation"<<endl;
    }
}