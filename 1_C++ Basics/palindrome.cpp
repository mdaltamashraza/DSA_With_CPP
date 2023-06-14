//program to check wheter the number is palindrome or not  original and reverse are same e.g 12321

#include<iostream>
using namespace std;
int main()
{
    int num,reverse=0;
    cout<<"enter the number to check for palindrome:";
    cin>>num;

    int original=num; //to store original value

    while(num!=0) //loop will run untill number becomes 0
    {
       int rem= num%10;  //find the last digit
       reverse= (reverse*10)+rem;  //store the last digit in reverse order
       num= num/10;  //removes the last digit by dividing
    }

    if(original==reverse)
    {
        cout<<"palindrome number";
    }
    else{
        cout<<"not a palindrome number";
    }
}