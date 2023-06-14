/*
  1 2 3 4 5 5 4 3 2 1
  1 2 3 4 * * 4 3 2 1
  1 2 3 * * * * 3 2 1
  1 2 * * * * * * 2 1
  1 * * * * * * * * 1
*/
#include<iostream>
using namespace std;
int main()
{
    int i,j,k;
    

    for(i=1;i<=5;i++)
    {
        
        k=1;
        for(j=1;j<=10;j++)
        {
            if(j<=6-i||j>=5+i)
            {
                cout<<k;
                j<5?k++:k--;
            }
            else{
                cout<<"*";
                if(j==5)
                {
                    k--;
                }
            }

        }
        cout<<endl;
    }
}