#include<iostream>
using namespace std;
void add();
void subtract();
void multiply();
void switchwork();
int main()
{
  char ch='y';
  while(ch=='y'||ch=='Y')
  { system ("cls");
  	switchwork();
  	cout<<"Do you want to continue\nPress y for continue and n for stop"<<endl;
	cin>>ch;
  }
}
void switchwork()
{
	int choice;
	cout<<"Please enter your choice\n1: add\n2: subtract\n3: multiply"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:
			add();
			break;
		case 2:
			subtract();
			break;
		case 3:
			multiply();
			break;
		default:
			cout<<"Invalid choice";
			break;
	}

}
	void add()
	{ 
	int valueOne;
	int valueTwo;
	  cout<<"Please enter valueOne =";
	  cin>>valueOne;
	  cout<<"Please enter valueTwo =";
	  cin>>valueTwo;
	  cout<<valueOne+valueTwo<<endl;
	}
	void subtract()
	{
	int valueOne;
	int valueTwo;
	  cout<<"Please enter valueOne =";
	  cin>>valueOne;
	  cout<<"Please enter valueTwo =";
	  cin>>valueTwo;
	  cout<<valueOne-valueTwo<<endl;
	}
	void multiply()
	{
	int valueOne;
	int valueTwo;
	  cout<<"Please enter valueOne =";
	  cin>>valueOne;
	  cout<<"Please enter valueTwo =";
	  cin>>valueTwo;
	  cout<<valueOne*valueTwo<<endl;
	}
