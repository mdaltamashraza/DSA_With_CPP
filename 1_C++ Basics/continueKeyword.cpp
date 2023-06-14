//continue = it skips the iteration where we use the continue keyword

#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=10;i++)
    {
        if(i==6) //it will skip the 6 because we have condition of that
        {
            continue;
        }
        cout<<i<<endl;
    }

    for(int i=1;i<=5;i++)
    {
        cout<<"hello"<<endl;
        
        continue; //this continue will skip the next hi from output only print hello
        cout<<"hi"<<endl;
    }
}