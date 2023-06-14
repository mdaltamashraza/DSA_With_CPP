//exit() function to tackle the infinite loop condition 
#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int num=1;
    cout<<"how are you"<<endl;

    while(1)
    {
        switch(num)
        {
            case 1: cout<<"hello ji"<<endl;
            break;
            cout<<"hii";
            default:cout<<"invalid";
        }
    exit(0); //this will exit the while loop

    }
}