#pragma once
//Add a copy constructor to the FeetInches class.This constructor should accept a
//FeetInches object as an argument.The constructor should assign to the feet
//attribute the value in the argument’s feet attributeand assign to the inches
//attribute the value in the argument’s inches attribute.As a result, the new object will
//be a copy of the argument object
class FeetInches
{
private:
	int feet; // To hold a number of feet
	int inches; // To hold a number of inches
	void simplify(); // Defined in FeetInches.cpp
public:
	//Copy Constructor
	FeetInches(const FeetInches &f,const FeetInches &i)
	{
		feet = f.feet;
		inches = i.inches;
	}
	// Constructor
	FeetInches(int f = 0, int i = 0)
	{
		feet = f;
		inches = i;
		simplify();
	}
	//Copy Constructor

	// Mutator functions
	void setFeet(int f)
	{
		feet = f;
	}

	void setInches(int i)
	{
		inches = i;
		simplify();
	}

	// Accessor functions
	int getFeet() const
	{
		return feet;
	}

	int getInches() const
	{
		return inches;
	}
};
