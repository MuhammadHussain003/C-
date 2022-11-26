#include<iostream>
using namespace std;
int main()

{ 
    int num;
    char a;
    
	cout<<"please enter your choice\n1 for fah to cel\n2 for cel to fah"; 
	cin>>num ; 
if(num==1)
{
	int fah;
	cout<<"Please enter tem in fah";
	cin>>fah;
	int cel =(fah-32)*5/9;
	cout<<"Conveted temp is cel is "<<cel<<endl;
}
else if (num==2)
{
	int cel;
	cout<<"Please enter tem in cel";
	cin>>cel;
	int fah = cel*(5/9+32);
	cout<<"converted temp in cel is"<<fah<<endl;
}
    cout<<"Do you want to more conversion\npress y for more and n for stop";
    cin>>a;
if (a=='y')
{
	cout<<"please enter your choice\n1 for fah to cel\n2 for cel to fah\n"; 
	cin>>num ; 
	if(num==1)
{
	int fah;
	cout<<"Please enter tem in fah";
	cin>>fah;
	int cel =(fah-32)*5/9;
	cout<<"Conveted temp is cel is "<<cel<<endl;
}
else if (num==2)
{
	int cel;
	cout<<"Please enter tem in cel";
	cin>>cel;
	int fah = cel*(5/9+32);
	cout<<"converted temp in cel is"<<fah<<endl;
}
	}    
 

    cout<<"Thank you";
 }
