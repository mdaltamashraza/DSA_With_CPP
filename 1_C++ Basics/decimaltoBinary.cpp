//decimal to binary conversion

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter number whose binary you want:";
    cin>>n;

    int i=0;
    int answer=0; //to store the answer
    while(n!=0)
    {
        int bit=n&1; //this will check the last bit with AND operation

        answer=(bit * pow(10,i))+answer; //this will give the answer of the last bit in the reverse order

        n=n>>1; //right shift by 1
        i++;
    }
    cout<<"Binary is:"<<answer;
}

//in this Mingw compiler it is giving 1 less than the answer