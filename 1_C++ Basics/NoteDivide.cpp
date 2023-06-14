//divide the amount in such order to obtain how many RS1000,RS500,RS100,RS50,RS20,RS10,RS5,RS2,RS1 notes are required

#include<iostream>
using namespace std;
int main()
{
    int amount;
    cout<<"enter the amount:";
    cin>>amount;

    int RS1000, RS500, RS100, RS50, RS20, RS10, RS5, RS2, RS1; 

    switch(1)
    {
        case 1: RS1000= amount/1000;
                amount= amount%1000;
                cout<<"1000rs notes required:"<<RS1000<<endl;

        case 2: RS500= amount/500;
                amount= amount%500;
                cout<<"500rs notes required:"<<RS500<<endl;

        case 3: RS100= amount/100;
                amount= amount%100;
                cout<<"100rs notes required:"<<RS100<<endl;

        case 4: RS50= amount/50;
                amount= amount%50;
                cout<<"50rs notes requiured:"<<RS50<<endl;

        case 5: RS20=amount/20;
                amount= amount%20;
                cout<<"20rs notes required:"<<RS20<<endl;

        case 6: RS10=amount/10;
                amount= amount%10;
                cout<<"10rs notes required:"<<RS10<<endl;

        case 7: RS5= amount/5;
                amount= amount%5;
                cout<<"5rs notes required:"<<RS5<<endl;

        case 8: RS2= amount/2;
                amount= amount%2;
                cout<<"2rs notes required:"<<RS2<<endl;

        case 9: RS1= amount/1;
                amount= amount%1;
                cout<<"1rs notes required:"<<RS1<<endl; 
            
    }
}