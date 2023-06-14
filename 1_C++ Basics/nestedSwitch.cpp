//nested switch not very used but for concept only

#include<iostream>
using namespace std;
int main()
{
    char ch='A';
    int num=1;

    switch(ch)
    {
        case 1: cout<<"first number";
        break;

        case 'A': switch(num)
                 {
                    case 1: cout<<"the number is"<<num;
                    break;
                 }
        break;

        default: cout<<"invalid case";
    }

}