/*
  * 
  * *
  * * * 
  * * * *
  * * * * *
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
        int col=1;
        while(col<=row)  //column depends upon row so in every line column is less than row or at max equal to row
        {
            cout<<" * ";
            col++;
        }
        cout<<endl;
        row++;
    }
}