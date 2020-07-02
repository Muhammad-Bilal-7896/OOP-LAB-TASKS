#pragma once
#include<iostream>
using namespace std;
//4.Create a class called Martix that represents a 3x3 matrix.Create a 
//constructor for initializing the matrix with 0 values.Create another 
//overloaded constructor for initializing the matrix to the values sent 
//from outside.Overload the*and / operators for multiplication and 
//division of two matrices.* operator for finding the product of the 
//two matrices.Define all the member functions outside the class.
class MatrixAgain
{
	int matrix[3][3];
public:
    MatrixAgain();
    MatrixAgain operator * (MatrixAgain rhs) // One of the two names sneeded to change.
    {
        MatrixAgain product; //only one value with a proper name
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                // better be explicit and use this, imo
                product.matrix[i][j] = this->matrix[i][j] * rhs.matrix[i][j];
            }
        }
        return product; // return only _after_ all the calculations.
    }
    MatrixAgain operator/(MatrixAgain rhs) // One of the two names needed to change.
    {
        MatrixAgain division; //only one value with a proper name
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                // better be explicit and use this, imo
                division.matrix[i][j] = this->matrix[i][j] / rhs.matrix[i][j];
            }
        }
        return division; // return only _after_ all the calculations.
    }
    void Display();
    void setMatrixtwo(int[][3]);
};

MatrixAgain::MatrixAgain()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrix[i][j] = 0;

        }
    }
}

void MatrixAgain::Display()
{
    for (int i = 0; i < 3; i++)
    {
        cout << " ";
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j]; 
            cout << " ";
            if (j == 3 - 1)
                cout << endl;
        }
    }
}
void MatrixAgain::setMatrixtwo(int m[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrix[i][j] = m[i][j];
        }
    }
}