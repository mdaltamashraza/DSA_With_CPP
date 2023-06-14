/*
 *****
 ****
 ***
 **
 *
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter number:";
    cin>>n;

    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

/*
2nd method

main(){
    int n;
    cin>>n;
     int i=1;
     while(i<=n){
         
        // star print
        int j=1;
        while(j<=n-i+1){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
         
     }

*/