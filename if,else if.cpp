#include<iostream>
using namespace std;
int main()
{
	int marks;
	cout<<"Your Marks is ";
	cin>>marks;
	if(marks>=90)
	{
		cout<<"your grade is A+";
	}
	else if(marks>=80)
	{
		cout<<"your grade is A";
	}
	else if(marks<=60)
	{
		cout<<"your are fail";
	}
}
