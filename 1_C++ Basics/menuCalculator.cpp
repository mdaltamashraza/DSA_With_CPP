//Menu driven calculator

#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int a,b,choice;
    while(1)
    {
    cout<<"1. Addition"<<endl;
    cout<<"2. Substraction"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. Division"<< endl;
    cout<<"5. Modulus"<< endl;
    cout<<"6. Exit"<< endl;
    cout<<endl;

    cout<<"enter your choice:";
    cin>>choice;

        switch(choice)
        {
            case 1: cout<<endl<<"enter the value of a & b"<<endl;
                    cin>>a>>b;
                    cout<<"addition is: "<<(a+b)<<endl<<endl;
                    break;

            case 2: cout<<endl<<"enter the value of a & b"<<endl;
                    cin>>a>>b;
                    cout<<"Subtraction is: "<<(a-b)<<endl<<endl;
                    break;

            case 3: cout<<endl<<"enter the value of a & b"<<endl;
                    cin>>a>>b;
                    cout<<"Multipliction is: "<<(a*b)<<endl<<endl;
                    break;

            case 4: cout<<endl<<"enter the value of a & b"<<endl;
                    cin>>a>>b;
                    cout<<"Division is: "<<(a/b)<<endl<<endl;
                    break;

            case 5: cout<<endl<<"enter the value of a & b"<<endl;
                    cin>>a>>b;
                    cout<<"Modulus(remainder) is: "<<(a%b)<<endl<<endl;
                    break;

            case 6: cout<<"Exiting...."<<endl;
                    cout<<"Thank you for using the calculator"<<endl;
                    exit(0);

            default: cout<<endl<<"invalid input"<<endl<<endl;
        }
    }
}