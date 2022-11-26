#include<iostream>
using namespace std;
int main()

{   int num;
    int fah;
    int cel;
	cout<<"Please enter your choice\n1 for fah to cel\n2 for cel to fah";
	cin>>num;
	if(num==1)
	{
		cout<<"Please enter temprature in fah\n";
		cin>>fah;
		cel = (fah-32)*5/9;
		cout<<"Converted temprature in cel is"<<cel;
	}
	else if(num==2)
	{
		cout<<"Please enter temprature in cel";
		cin>>cel;
		fah = cel*(9/5+32);
		cout<<"Converted temprature in fah is"<<fah<<endl;
	}
	cout<<"Thank You";
}
