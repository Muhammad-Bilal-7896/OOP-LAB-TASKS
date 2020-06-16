#include<iostream>
#include"BankAccount.h"
#include"FeetInches.h"
#include"Times.h"
#include"Rectangle.h"
#include"clockType.h"
using namespace std;

//Question1
//Add a copy constructor to the FeetInches class.This constructor should accept a
//FeetInches object as an argument.The constructor should assign to the feet
//attribute the value in the argument’s feet attributeand assign to the inches
//attribute the value in the argument’s inches attribute.As a result, the new object 
//will be a copy of the argument object
//void FeetInches::simplify()
//{
//	if (inches >= 12)
//	{
//		feet += (inches / 12);
//		inches = inches % 12;
//	}
//	else if (inches < 0)
//	{
//		feet -= ((abs(inches) / 12) + 1);
//		inches = 12 - (abs(inches) % 12);
//	}
//}
//
//
//
//int main()
//{
//	FeetInches obj1(5,-2);
//	FeetInches obj2 = obj1;
//	cout << "obj1.feet = " << obj1.getFeet() << "\t" << "obj1.inches = "
//		<< obj1.getInches() << endl;
//	cout << "obj2.feet = " << obj2.getFeet() << "\t" << "obj2.inches = "
//		<< obj2.getInches() << endl;
//}


//Question 2 - Create a BankAccount class having Balance as an attributeand add 
//copy constructor to it.The constructor should accept a BankAccount object as an 
//argument.It should assign to the balance field, the value in the argument’s balance 
//field.As a result, the new object will be copy of the argument object
//int main()
//{
//	BankAccount obj1(15);
//	BankAccount obj2 = obj1;
//	cout << "obj1.Balance = " << obj1.getBalance() <<"\n";
//	cout << "obj2.Balance = " << obj2.getBalance();
//	return 0;
//}

//Question 3 - Write a program having class Time, by using Gettersand Setters you should 
//be able to set the hours, minutesand secondsand display the final time in the main 
//function.
//(Hint : One bigger setter function within which all 3 setters will be calledand that 
//	bigger setter will be called within the constructor.)
//int main()
//{
//	int hours;
//	int minutes;
//	int seconds;
//	cout << "Enter the hours ";
//	cin >> hours;
//	cout << "Enter the minutes ";
//	cin >> minutes;
//	cout << "Enter the seconds ";
//	cin >> seconds;
//	Time obj(hours, minutes, seconds);
//	cout << "*******************************************\n";
//	cout << "The time is equal to: " << obj.getHours() << " : " << obj.getMinutes() << " : " << obj.getSeconds() << endl;
//	cout << "*******************************************\n";
//	return 0;
//}
//


//Question 4
//Designand Implement a classclockTypethat manages time.The class clockType should 
//store hour, minutes, and secondsand display it in the following format(12:30 : 5).
//For any object of clockType,your program should be able to perform the following 
//operations on that object.
//⦁	Set the time
//⦁	Get the time
//⦁	Display the time
//⦁	Increment the hour by 1
//⦁	Increment the minute by 1
//⦁	Increment the second by 1
//⦁	Create another object of clockTypeand copy it with the object you created earlier; .
//And see the values in both objects.See they are copy or not.
//int main()
//{
//	int hours;
//	int minutes;
//	int seconds;
//	cout << "Enter the hours ";
//	cin >> hours;
//
//	cout << "Enter the minutes ";
//	cin >> minutes;
//	cout << "Enter the seconds ";
//	cin >> seconds;
//	clockType obj(hours, minutes, seconds);
//	clockType obj1 = obj;
//	obj.ihours(hours);
//	obj.iminutes(minutes);
//	obj.iseconds(seconds);
//	cout << "*******************************************\n";
//	cout << "The time is equal to: " << obj.getHours() << " : " << obj.getMinutes() << " : " << obj.getSeconds() << endl;
//	cout << "The time after increment is equal to: " << obj.getHours() << " : " << obj.getMinutes() << " : " << obj.getSeconds() << endl;
//	cout << "The time of obj 2 copy constructor is equal to: " << obj1.getHours() << " : " << obj1.getMinutes() << " : " << obj1.getSeconds() << endl;
//
//	cout << "*******************************************\n";
//	return 0;
//}
//



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

//int main()
//{
//	float height, width;
//	cout << "Enter height: ";
//	cin >> height;
//	cout << "Enter width: ";
//	cin >> width;
//	Rectangle obj1(height, width);
//	Rectangle obj2 = obj1;
//	cout << "The obj1 area is: " << obj1.getArea()<<endl;
//	cout << "The obj2 area is: " << obj2.getArea() << endl;
//	return 0;
//}