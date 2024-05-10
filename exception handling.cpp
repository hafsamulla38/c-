#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	cout<<"Enter a number:";
	cin>>num1;
	cout<<"Enter a number:";
	cin>>num2;
	if(num2!=0)
	{
		int result=num1/num2;
		cout<<"Result:"<<result<<endl;
	}
	else
	{
		cout<<"Error:Cannot divide by zero"<<endl;
	}
	return 0;
}
