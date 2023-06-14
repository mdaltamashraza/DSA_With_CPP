/*
   * * * * *
   * * * * *
   * * * * *
   * * * * *
   * * * * *
*/

#include<iostream>
using namespace std;
int main()
{
    int num,row,col;
    cout<<"enter number:"<<endl;
    cin>>num;
    row=1;
    while(row<=num)
    {
        col=1;
        while(col<=num)
        {
            cout<<" * ";
            col++;
        }
        cout<<endl;
        row++;
    }
}