#include<iostream>
using namespace std;
int main()
{
	char ch;
	
	cout<< "enter any character" << endl;
	cin>> ch;
	
	if(ch>=97&&ch<=122)
	{
		cout<< "lower case" << endl;
	}
	else if(ch>=65&&ch<=90)
	{
		cout<< "UPPER case"<< endl;
	}
	else if(ch>=48&&ch<=57)
	{
		cout<< "numeric value" << endl;
	}
	else
	{
		cout<< "invlaid input" << endl;
	}
}