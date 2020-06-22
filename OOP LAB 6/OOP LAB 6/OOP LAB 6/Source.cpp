#include<iostream>
#include<string>
#include"Student.h"
using namespace std;


//OOP LAB # 6
//question1
//⦁ Write a C++ that creates four objects with roll_num, name and marks as attributes 
//of class student.Each object of class must be assigned a unique roll_num. 
//(using roll_number as static data member).Print the output of roll_num of each object.
//int main()
//{
//	Student obj1, obj2, obj3, obj4;
//	char name[5] = n n{ 'B', 'i','l','a','l' };
//	obj1.Setdata(10, 1,name);
//	obj2.Setdata(20, 2, name);
//	obj3.Setdata(20, 3, name);
//	obj1.display();
//	obj2.display();
//    obj3.display();
//	obj4.display();
//}

//question 2

//class Test
//{
//private:
//	int x;
//public:
//  Test(int x = 0) { this->x = x; }
//  void change(const Test &t) { t=t.x; }
//  void print() 
//  { 
//	  cout  << "x = " << x << endl; 
//  }
//};
//
//int main()
//{
//	Test obj(5);
//	Test* ptr  = new Test(10);
//	obj.change(ptr);
//	obj.print();
//	delete ptr;
//	return 0;
//}



//⦁	With the help of your understanding about arrow pointerand dynamic objects, explain the code on paperand predict the output of the following code.
//
//class Data
//{
//	int x, y;
//public:
//	Data()		// default constructor
//	{
//		x = 0;
//		y =0;
//	}
//	void SetValue(int x1, int y1)
//	{
//		x = x1;
//		y = y1;
//
//	}
//	void display()
//	{
//		cout << "\n x = " << x;
//		cout << "\n y = " << y;
//	}
//};
//int main()
//{
//	Data *ptr = new Data;		// declaration of object pointer		// dynamic object
//	ptr->SetValue(10,20);
//	ptr->display();
//	return 0;
//}



//question3
//⦁	Write a program in which student array dynamically allocated and another marks array 
//in which marks of students are stored.Find the average of students and highest marks of 
//a student.8


int main(){
	
	int numStudents;
	cout << "Enter the total number of students:\t";
	cin >> numStudents;
	float* studentArray = new float[numStudents];
	float highest;
	float sum=0;
	int st;
	for (int i = 0; i < numStudents; i++)
	{
		
		cout << "Enter the marks of student " << (i + 1) << "\t";
		
		highest = studentArray[0];
		cin >> studentArray[i];
		sum += studentArray[i];
		if (studentArray[i] > highest)
		{
			highest = studentArray[i];
			st = i;
		}
	}
	float average = sum / numStudents;
	cout << "The highest marks is of student " << (st + 1) <<
		" and are = " << highest<<endl;
	cout << "The average marks of all the students is = " <<
		average;
	delete[] studentArray;
}



//question 4
//⦁	Write a C++ program in which user declare two - dimensional array dynamically.
//Find row sum and columns sum of all row sand columns of array.
//int main()
//{
//	
//	int total_row;
//	int total_column;
//
//
//	int rows;
//	int	columns;
//
//	cout << "Please enter the number of rows: " << endl;
//	cin >> rows;
//	cout << "Please enter the number of colums: " << endl;
//	cin >> columns;
//	cout << "Enter values for the matrix? \n\n\n" << endl;
//	int* val = nullptr;
//	 val = new int[rows * columns];
//
//	 val[rows*columns] = {0};
//
//	// check if row and col > 0
//	
//
//
//	
//
//	
//	for (int col = 0; col < columns; col++)
//	{
//		total_column = 0;
//		for (int row = 0; row < rows; row++)
//		{
//			total_column += val[row * col];
//			cout << "Enter the input for column  " << (col + 1) <<"\t";
//			cin >> val[row * col];
//
//
//		}
//	}
//
//
//	for (int row = 0; row < rows; row++)
//	{
//		total_row = 0;
//		for (int col = 0; col < columns; col++)
//		{
//			total_row += val[row * col];
//			cout << "Enter the input for row  " << (row + 1) << "\t";
//			cin >> val[row * col];
//		}
//	}
//
//
//	cout << "The sum of rows is equal to: " << total_row << endl;
//	cout << "The sum of columns is equal to: " << total_column << endl;
//	delete[] val;
//	return 0;
//}


