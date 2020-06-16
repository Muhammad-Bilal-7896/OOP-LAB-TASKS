#pragma once
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
class clockType 
{
	int hours;
	int minutes;
	int seconds;

public:

	clockType(int, int, int);
	clockType(const clockType& h, const clockType& m, const clockType& s)
	{
		hours = h.hours;
		minutes = m.minutes;
		seconds = s.seconds;
	}
	void setHours(int);
	void setMinutes(int);
	void setSeconds(int);
	void setTime(int, int, int);
	int getHours();
	int getMinutes();
	int getSeconds();
	void ihours(int)
	{
		hours++;
	}
	void iminutes(int)
	{
		minutes++;
	}
	void iseconds(int)
	{
		seconds++;
	}
};
//Constructor
clockType::clockType(int h = 0, int m = 0, int s = 0)
{
	setTime(h, m, s);
}
//Constructor
void clockType::setHours(int h) {
	if (h >= 24)
	{
		h += (minutes / 60);
		minutes= minutes % 12;
	}
	else
	{
		hours = h;
	}
}
void clockType::setMinutes(int m) {
	if (m > 60)
	{
		m += (seconds / 60);
		seconds = seconds % 60;
	}
	else
	{
		minutes = m;
	}
}
void clockType::setSeconds(int s) {
	if (s > 60)
	{
		minutes += (s / 60);
		s =  s% 60;
	}
	else
	{
		seconds = s;
	}
}
void clockType::setTime(int h, int m, int s) {
	setHours(h);
	setMinutes(m);
	setSeconds(s);
}

int clockType::getHours()
{
	return hours;
}
int clockType::getMinutes()
{
	return minutes;
}
int clockType::getSeconds()
{
	return seconds;
}