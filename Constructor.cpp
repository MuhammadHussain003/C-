main.cpp
#include<iostream>
#include "MyClass.h"
using namespace std;
int main()
{
	MyClass obj;
	obj.DisplayName();
 } 
MyClass.cpp
#ifndef MYCLASS_H
#define MYCLASS_H
#include<iostream>
using namespace std;
class MyClass
{
	private:
		string Name;
		string FatherName;
	public:
	
	void DisplayName()
	{
		Name ="Muhammad Hussain";
		FatherName = "Ghulam Abbas";
		cout<<"Name is"<<Name<<endl;
		cout<<"Father Name is"<<FatherName;
		
	}
	
	MyClass()
	{
		cout<<"Welcome to the Program\n";
	}
		
	
	
};

#endif
