// i211775_Q3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void inputMatrix(int** matrix, int m, int n)
{
    cout << "Enter elements of the matrix: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
}

void displayMatrix(int** matrix, int m, int n)
{
    cout << "Matrix: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int sumMatrix(int** matrix, int m, int n)
{
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum += matrix[i][j];
        }
    }
    return sum;
}

void rowSum(int** matrix, int m, int n)
{
    cout << "Row-wise sum: " << endl;
    for (int i = 0; i < m; i++)
    {
        int rowSum = 0;
        for (int j = 0; j < n; j++)
        {
            rowSum += matrix[i][j];
        }
        cout << "Row " << i + 1 << ": " << rowSum << endl;
    }
}

void columnSum(int** matrix, int m, int n)
{
    cout << "Column-wise sum: " << endl;
    for (int j = 0; j < n; j++) 
    {
        int colSum = 0;
        for (int i = 0; i < m; i++) 
        {
            colSum += matrix[i][j];
        }
        cout << "Column " << j + 1 << ": " << colSum << endl;
    }
}

void transposeMatrix(int** matrix, int m, int n)
{
    cout << "Transpose of the matrix: " << endl;
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{

    cout << "------Matrix------" << endl << endl;
    int m, n;
    cout << "Enter the number of rows (m): ";
    cin >> m;
    cout << "Enter the number of columns (n): ";
    cin >> n;

    int** matrix = new int* [m];
    for (int i = 0; i < m; i++)
    {
        matrix[i] = new int[n];
    }

    while (true)
    {
        cout << "\n1. Input elements into matrix\n2. Display elements of matrix\n3. Sum of all elements of matrix\n4. Display row-wise sum of matrix\n5. Display column-wise sum of matrix\n6. Create transpose of matrix\n7. Exit\n";
        cout << "Enter your choice: ";
        int choice;
        cin >> choice;

        cout << endl;

        switch (choice)
        {
        case 1:

            inputMatrix(matrix, m, n);
            break;
        case 2:
            displayMatrix(matrix, m, n);
            break;
        case 3:
            cout << "Sum of all elements: " << sumMatrix(matrix, m, n) << endl;
            break;
        case 4:
            rowSum(matrix, m, n);
            break;
        case 5:
            columnSum(matrix, m, n);
            break;
        case 6:
            transposeMatrix(matrix, m, n);
            break;
        case 7:
            for (int i = 0; i < m; i++)
            {
                delete[] matrix[i];
            }
            delete[] matrix;
            return 0;
        default:
            cout << "Invalid choice. Please enter a number between 1 and 7." << endl;
        }
    }

    return 0;
}


