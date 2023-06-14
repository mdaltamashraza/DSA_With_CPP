//menu driven program to perform certain operations

#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int choice,num,a,b,c,count,fact;
    while(1)
    {
    cout<<endl<<"1. Print 1 to N"<<endl;
    cout<<"2. Greatest among three"<<endl;
    cout<<"3. Multiplication table"<<endl;
    cout<<"4. Factorial"<< endl;
    cout<<"5. check for prime number"<<endl;
    cout<<"6. Exit"<<endl;

    cout<<endl<<"enter your choice:";
    cin>>choice;
        
        switch(choice)
        {
            case 1:cout<<endl;
                   cout<<"enter number:";
                   cin>>num;
                   for(int i=1;i<=num;i++)
                   {
                    cout<<i<<endl;
                   }
                   break;

            case 2: 
                    cout<<endl;
                    cout<<"enter value of a:";
                    cin>>a;
                    cout<<"enter value of b:";
                    cin>>b;
                    cout<<"enter value of c:";
                    cin>>c;

                    if(a==b==c)
                    {
                        cout<<"All are same";
                    }
                    else if(a>b&&a>c)
                    {
                        cout<<"a is the greatest"<<endl;
                    }
                    else if(b>a&&b>c)
                    {
                        cout<<"b is the greatest"<<endl;
                    }
                    else if(c>a&&c>b)
                    {
                        cout<<"c is the greatest"<<endl;
                    }
                    else
                    {
                        cout<<"invalid input"<<endl;
                    }
                    break;

            case 3: cout<<endl;
                    cout<<"enter number whose multiplication you want:";
                    cin>>num;
                    
                    for(int i=1;i<=10;i++)
                    {
                       cout<<num*i<<endl;
                    }
                    break;

            case 4:cout<<endl;
                   cout<<"enter number factorial:";
                   cin>>num;
                   fact=1;

                   for(int i=1;i<=num;i++)
                   {
                      fact=fact*i;
                   }
                   cout<<"factorial is:"<<fact<<endl;
                   break;

            case 5:cout<<endl;
                   cout<<"enter number to check for prime";
                   cin>>num;
                   count=0;
                   for(int i=1;i<=num;i++)
                   {
                     if(num%i==0)
                     {
                        count++;
                     }
                   }
                   if(count==2)
                   {
                    cout<<"prime number"<<endl;
                   }
                   else{
                    cout<<"not a prime number"<<endl;
                   }
                   break;

            case 6: cout<<endl;
                    cout<<"Thank you"<<endl;
                    cout<<"Exiting"<<endl;
                    exit(0);

            default: cout<<"invalid input"<<endl;;
        }
    }
}