#pragma once
#include<iostream>
#include<string>
using namespace std;

//2.	Write a C++ program  for addition of two complex numbers using friend function
//(use constructor function to initialize data members of complex class).
//Complex
//Int x
//Int  img
//Complex() : (default constructor with zero values of data members)
//complex(x, img) : (Parametrized constructor with given inputs at the time of object creation)
//complex sum(complex, complex) : (friend function)
//show(complex) : display complex number of objects of class Complex.
//
//Hint : The->is called the arrow operator. It is formed by using the minus sign followed by a greater 
//than sign.Simply saying : To access members of a structure, use the dotoperator.To access members of a 
//structure through a pointer, use the arrow operator
//Program to add two complex numbers using friend function 

#include<iostream>

using namespace std;

class Complex

{

	int real, imag;

public:

	void set()

	{

		cout << "enter real and imag part";

		cin >> real >> imag;

	}

	friend Complex sum(Complex, Complex);

	void display();

};

void Complex::display()

{

	cout << "the sum of complex num is" << real << "+i" << imag;

}

Complex sum(Complex a, Complex b)

{

	Complex t;

	t.real = a.real + b.real;

	t.imag = a.imag + b.imag;

	return t;

}

