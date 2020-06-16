#pragma once
//Question 5
//A class that represents a Rectangle, it will have the following member variables and 
//methods :
//⦁	height
//⦁	width
//⦁	area
//⦁	getArea(int, int) - returns the area of the rectangle[Area = Width * Height]
//Write a program to create  object of Rectangle.Then ask the user to enter height and 
//width of object.
//Then create another object which will be a copy of the first object.write 
//carefully the main function.
class Rectangle
{
	float height;
	float width;
	float area;
public:
	Rectangle(const Rectangle& h,const Rectangle& w)
	{
		height = h.height;
		width = w.width;
	}
	float getArea()
	{
		area = width*height;
		return area;
	}
	void setHeight(float);
	void setWidth(float);
	Rectangle(float, float);
};
void Rectangle::setHeight(float h)
{
	height = h;
}
void Rectangle::setWidth(float w)
{
	width = w;
}
Rectangle::Rectangle(float h, float w)
{
	setHeight(h);
	setWidth(w);
}