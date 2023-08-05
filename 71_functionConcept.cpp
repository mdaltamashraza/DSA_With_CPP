#include<iostream>
using namespace std;

//function declaration
int power(int a, int b) //formal parameter
{
    int answer=1;
    for(int i=1;i<=b;i++)
    {
        answer=answer*a; 
    }
    return answer;
}

int main()
{
    int x,y;
    cout<<"enter the value of x & y"<<endl;
    cin>>x>>y;

    int answer=power(x,y); //function calling //actual parameter
    cout<<"answer is "<<answer<<endl;
}

