#pragma once
#include<iostream>
#include<string>
using namespace std;
//5.  Create a class called Time that has separate int member data for 
//hours, minutes, and seconds.Provide the following member functions 
//for this class :
class Time
{
	int hours;
	int minutes;
	int seconds;
	string time;
	int timeInt;
//	a) A no - argument constructor to initialize hour, minutes, and 
//seconds to 0.
public:
	Time()
	{
		this->hours = 0;
		this->minutes = 0;
		this->seconds = 0;
	}
//	b) A 3 - argument constructor to initialize the members to values 
//sent from the calling function at the time of creation of an object.
//Make sure that valid values are provided for all the data members.In 
//case of an invalid value, set the variable to 0.
	Time(int h, int m, int s)
	{
		this->hours = h;
		this->minutes = m;
		this->seconds = s;
	}
//	c) A member function show to display time in 11:59 : 59 format.
	void show()
	{
		time = to_string(hours) + ":" +to_string(minutes) + " : " + to_string(seconds);
		cout << time;
    }
//	d) An overloaded operator+ for addition of two Time objects.Each 
//time unit of one object must add into the corresponding time unit of 
//the other object.Keep in view the fact that minutesand seconds of 
//resultant should not exceed the maximum limit(60).If any of them do 
//exceed, subtract 60 from the corresponding unit and add a 1 to the 
//next higher unit.
	Time operator+(Time rhs)
	{
		Time sum;
		sum.hours = this->hours + rhs.hours;
		if (sum.hours > 12)
		{
			sum.hours = sum.hours - 12;
			sum.minutes += sum.hours * 60;
		}
		sum.minutes = this->minutes + rhs.minutes;
		if (sum.minutes > 60)
		{
			sum.minutes = sum.minutes - 60;
			sum.seconds += sum.minutes * 60;
		}
		sum.seconds = this->seconds + rhs.seconds;
		return sum;
	}
};


//e) An overloaded operator- for subtraction of two Time objects.one 
//time unit of one object must be subtracted into the corresponding 
//time unit of the other object.
//subtract minutes from minutes, seconds from seconds, hours from hours.
//Keep in view the fact that minutesand seconds of resultant should not 
//exceed the maximum limit(60).If any of them do exceed, subtract 60 
//from the corresponding unit and add a 1 to the next higher unit.
//

