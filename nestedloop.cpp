#include<iostream>
using namespace std;
int main()
{
	int a=23;
	int b=36;
	int c=36;
	if(a<=b)
	{
    	cout<<"a is less than b\n";
    	if(b!=c)
    	{
    		cout<<"b is equal to c";
		}
		else
		{
			cout<<"b is greater than c";
		}
	}

	else
	{
		cout<<"a is greater than b";
	}
}
