#pragma once
#include<iostream>
using namespace std;
class Matrix {
private:
    int matrix[2][2];
    int result[2][2];
public:
    Matrix operator + (Matrix rhs) // One of the two names needed to change.
    {
        Matrix sum; //only one value with a proper name
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                // better be explicit and use this, imo
                sum.matrix[i][j] = this->matrix[i][j] + rhs.matrix[i][j];
                result[i][j] = sum.matrix[i][j];
            }
        }

        return sum; // return only _after_ all the calculations.
    }

    void setMatrix(int m[][2])
    {
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                matrix[i][j] = m[i][j];
            }
        }
    }
    void Display() 
    {
        for (int i = 0; i < 2; i++)
        {
            cout << " ";
            for (int j = 0; j < 2; j++)
            {
                cout<<matrix[i][j];
                cout<<" ";
                if (j == 2 - 1)
                    cout << endl;
            }
        } 
    }
};
