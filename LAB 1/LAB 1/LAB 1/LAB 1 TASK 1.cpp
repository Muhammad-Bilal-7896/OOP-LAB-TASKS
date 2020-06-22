
#include<iostream>
using namespace std;
int main()
{
	//////////////////////////tasks1//////////////////////////////
	//LAB 1 TASK 1
    //Write a program to input numbers in the array and calculate the average of
    //all the numbers entered by the user.
	cout<<"***************************TASK 1**********************"<<endl;
	double* num=nullptr;
	int size;
	int sum = 0;
	cout << "How many numbers are there for the average calculation :";
	cin >> size;
	num = new double[size];
	for (int i = 0; i < size; i++)
	{
		cout << "Enter the number " << (i + 1)<<" : ";
		cin >> num[i];
		sum = sum + num[i];
	}
	double average = sum / size;
	cout << "The average of " << size << " numbers is = " << average << endl;
	cout << "***************************TASK 1**********************" << endl<<endl;
	//////////////////////////tasks1//////////////////////////////////

	cout << "***************************TASK 2**********************" << endl << endl;
	//////////////////////////tasks2//////////////////////////////////
//LAB TASK 2
//Write a program to input 15 integers in the array.Now display the amount of even
//and odd numbers in the array;
	const int size1 = 15;
	int arr[size1];
	static int even = 0;
	static int odd = 0;
	for (int i = 0; i < size1; i++)
	{
		cout << "Enter the integer "<< (i + 1) <<" in the array : ";
		cin >> arr[i];
		if (arr[i] % 2 == 0)
		{
			even++;
		}
		else if (arr[i] % 2 != 0)
		{
			odd++;
		}
	}
	cout << "The number of even numbers are : " << even << endl;
	cout << "The number of odd numbers are : " << odd << endl<<endl;
	cout << "\n***************************TASK 2**********************" << endl << endl;
	//////////////////////////tasks2//////////////////////////////////


	cout << "\n***************************TASK 3**********************" << endl << endl;
	//////////////////////////tasks3//////////////////////////////////

	cout << "\n***************************TASK 3**********************" << endl << endl;
	//////////////////////////tasks3//////////////////////////////////



	cout << "\n***************************TASK 4**********************" << endl << endl;
	//////////////////////////tasks4//////////////////////////////////
	cout << "\n***************************TASK 4**********************" << endl << endl;
	//////////////////////////tasks4//////////////////////////////////

}