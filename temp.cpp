#include<iostream>
using namespace std;
int main()

{ 
    int num;
    
    
	cout<<"please enter your choice\n1 for fah to cel\n2 for cel to fah"; 
	cin>>num ; 
if(num==1)
{
	int fah;
	cout<<"Please enter tem in fah";
	cin>>fah;
	int cel =(fah-32)*5/9;
	cout<<"Conveted temp is cel is "<<cel;
}
else if (num==2)
{
	int cel;
	cout<<"Please enter tem in cel";
	cin>>cel;
	int fah = cel*(5/9+32);
	cout<<"converted temp in cel is"<<fah;
}

}
