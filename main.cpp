#include<iostream>
#include "Square.h"
#include "Rectangle.h"
#include "Circle.h"
using namespace std;
int main()
{
	int SArea;
	int RArea;
	
	Square square;
	SArea = square.Calculate_Area(3,6);
	
	Rectangle rectangle;
	RArea = rectangle.Calculate_Area(2,5);
	
	cout<<"The Area of the Square is "<<SArea<<endl;
	cout<<"The Area of the Rectangle is "<<RArea<<endl;
    
	Circle circle;
	circle.ShowTheResult();
}
