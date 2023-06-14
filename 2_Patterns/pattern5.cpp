/*
  1 2 3 4 3 2 1
  1 2 3   3 2 1
  1 2       2 1
  1           1
*/

#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int k;
    for(i=1;i<=4;i++)
    {
        k=1;
        for(j=1;j<=7;j++)
        {
            if(j<=5-i||j>=3+i)
            {
                cout<<k;
                j<4?k++:k--;
            }
            else{
                cout<<" ";
                if(j==4)
                {
                    k--;
                }
            }
        }
        cout<<endl;
    }
}