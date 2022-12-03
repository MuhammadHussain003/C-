#include<iostream>
using namespace std;
int main()
{
	char a ='y';
	while(a=='y')
	{
		int temp;
		int num;
		cout<<"Enter temperature =";
		cin>>temp;
		cout<<"Press 1 for fah to cel\n 2 for cel to fah\n";
		cin>>num;
		switch(num)
		{
			case 1:
			case 11:
				cout<<"Required temp in cel is = "<<(temp-32)*5/9<<endl;
				break;
			case 2:
			case 22:
				cout<<"Required temp in fah is = "<<(temp+32)*9/5<<endl;
				break;
			default:
				cout<<"Invalid choice";
		}
		cout<<"Do you want to continue prog...\nPress y for continue and n for stop\n";
		cin>>a;
	}
	cout<<"Thank you for using c++";
}
