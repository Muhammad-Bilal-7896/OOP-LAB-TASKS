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
//structure through a pointer, use the arrow operator.



//3. Write a C++ program to perform matrix 2x2, addition and subtraction using operator overloading 
//concept.

#include<iostream>
#include<string>
#include"Complex.h"
#include"Time.h"
#include"Matrix.h"
#include"MatrixAgain.h"
using namespace std;


int main()
{
    /*cout << "\n*********************TASK1*************************\n";
    Complex a, b, c;
    a.set();
    b.set();
    c = sum(a, b);
    c.display();

    cout << "\n*********************TASK2*************************\n";
    Matrix mat1, mat2, sum;

    const int size = 2;
    int matrix1[size][size];
    int matrix2[size][size];
    cout << "\nEnter the values of matrix 1 (2 X 2)\n\n";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> matrix1[i][j];
        }
    }

    cout << "\nEnter the values of matrix 2 (2 X 2)\n\n";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> matrix2[i][j];
        }
    }
    cout << "\n\nSetting the values now\n\n";
    mat1.setMatrix(matrix1);
    mat2.setMatrix(matrix2);
    sum = mat1 + mat2;
    cout << "\n\nMatrix 1 (2 X 2) is : \n";
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            cout << matrix1[i][j] << "  ";
            if (j == size - 1)
                cout << endl;
        }
    }

    cout << "\n\nMatrix 2 (2 X 2) is : \n";
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            cout << matrix2[i][j] << "  ";
            if (j == size - 1)
                cout << endl;
        }
    }

    cout << "\n\nSum of two matrices is equal to (2 X 2) is : \n";
    sum.Display();


    cout << "\n*********************TASK3*************************\n";
    MatrixAgain m1, m2, product, division;

    const int size = 3;
    int matrixtwo1[size][size];
    int matrixtwo2[size][size];
    cout << "\nEnter the values of matrix 1 (3 X 3)\n\n";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> matrixtwo1[i][j];
        }
    }

    cout << "\nEnter the values of matrix 2 (3 X 3)\n\n";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> matrixtwo2[i][j];
        }
    }
    cout << "\n\nSetting the values now\n\n";
    m1.setMatrixtwo(matrixtwo1);
    m2.setMatrixtwo(matrixtwo2);
    product = m1 * m2;
    division = m1 / m2;
    cout << "\n\nMatrix 1 (3 X 3) is : \n";
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            cout << matrixtwo1[i][j] << "  ";
            if (j == size - 1)
                cout << endl;
        }
    }

    cout << "\n\nMatrix 2 (3 X 3) is : \n";
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            cout << matrixtwo2[i][j] << "  ";
            if (j == size - 1)
                cout << endl;
        }
    }

    cout << "\n\nProduct of two matrices is equal to (3 X 3) is : \n";
    product.Display();
    cout << "\n\nDivision of two matrices is equal to (3 X 3) is : \n";
    division.Display();*/

   //A main() programs should create two initialized Time objects and one 
   //that isn’t initialized.Then it should add the two initialized values 
   //together, leaving the result in the third Time variable.Finally it 
   //should display the value of this third variable.

Time obj1(11, 56, 23);
Time obj2(10, 45, 56);
Time sum;

cout << "\n\nSumming the time objects\n\n";
cout << "\n\nThe time of first object is: "; obj1.show();
cout << "\n\nThe time of second object is: "; obj2.show();
sum = obj1 + obj2;
cout << "\n\nThe time of sum of two objects is equal to: "; sum.show();


   return 0;
}
