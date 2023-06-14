//type casting in c++ --> conversion from one data type to another is known as typecasting

#include<iostream>
using namespace std;
int main()
{
    int a='b';  //here we assigned 'b' in the int data type so it will convert the b from ASCII table and print the integer of that
    cout<<a<<endl;

    char ch=98;  //here we assigned 98 a integer value in the char data type so it will convert the 98 from ascii and print its equivalent character
    cout<<ch<<endl;

    char ch1= 123456;  //here the value of maximum charcater bits is exceeds so it will only take last some values and prinnt accordingly 
    cout<<ch1<<endl;

    //printing bigger values in small containers will not print the whole digits but prints the some last digits accordingly
}