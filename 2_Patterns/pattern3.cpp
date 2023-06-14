/*
  * * * * *
  * * * *
  * * *
  * *
  * 
*/

#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter number:";
    cin>>num;

    int row=1;
    while(row<=num)
    {
        int col=num;  //column depends on Number so column=number
        while(col>=row) //in every execution colmn is either greater than row or equal to row
        {
            cout<<" * ";
            col--;
        }
        cout<<endl;
        row++;
    }
}