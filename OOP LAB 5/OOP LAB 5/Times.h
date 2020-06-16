#pragma once
#include<iostream>
using namespace std;
//Question 3 - Write a program having class Time, by using Gettersand Setters you should 
//be able to set the hours, minutesand secondsand display the final time in the main 
//function.
//(Hint : One bigger setter function within which all 3 setters will be called and that 
//	bigger setter will be called within the constructor.)
class Time
{ 
	int hours;
	int minutes;
	int seconds;
	
public:

	Time(int, int, int);
	void setHours(int);
	void setMinutes(int);
	void setSeconds(int);
	void setTime(int, int, int);
	int getHours();
	int getMinutes();
	int getSeconds();
};
//Constructor
Time::Time(int h=0, int m=0, int s=0)
{
	setTime(h, m, s);
}
//Constructor
void Time::setHours(int h) {
	if (h < 0)
	{
		cout<< "Enter positive hours";
		return;
	}
	else
	{
		hours = h;
	}
}
void Time::setMinutes(int m) {
	if (m<0)
	{
		
		cout << "Enter positive minutes";
		return;
	}
	else
	{
		minutes = m;
	}
}
void Time::setSeconds(int s) {
	if (s <0)
	{
		cout << "Enter positive seconds";
		return;
	}
	else
	{
		seconds = s;
	}
}
void Time::setTime(int h,int m,int s) {
	setHours(h);
	setMinutes(m);
	setSeconds(s);
}

int Time::getHours()
{
	return hours;
}
int Time::getMinutes()
{
	return minutes;
}
int Time::getSeconds()
{
	return seconds;
}


