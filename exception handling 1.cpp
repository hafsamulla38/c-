#include<iostream>
using namespace std;
int main()
{
	try
	{
		//code that may cause an error
		int num1,num2;
		cout<<"Enter a number";
		cin>>num1;
		cout<<"Enter a number";
		cin>>num2;
		if(num2==0)
		{
			throw "Cannot divide by zero";
		}
		int result=num1/num2;
		cout<<"Result:"<<result<<endl;
	}
	catch(const char* error)
	{
		cout<<"An error occured:"<<error<<endl;
	}
	return 0;
}
