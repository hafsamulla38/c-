#include<iostream>
using namespace std;
int main()
{
	int s1,s2,s3,s4,s5,s6,total,percentage;
	cout<<"enter the marks of s1:";
	cin>>s1;
	cout<<"enter the marks of s2:";
	cin>>s2;
	cout<<"enter the marks of s3:";
	cin>>s3;
	cout<<"enter the marks of s4:";
	cin>>s4;
	cout<<"enter the marks of s5:";
	cin>>s5;
	cout<<"enter the marks of s6:";
	cin>>s6;
	total=s1+s2+s3+s4+s5+s6;
	cout<<"Total marks:"<< total <<endl;
	percentage=total/6;
	cout<<"Percentage:"<<percentage<<"%"<<endl;
	return 0;
}

