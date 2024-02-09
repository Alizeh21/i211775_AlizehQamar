// i211775_AlizehQamar_Task02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
    float array[5];
    float* ptr = array;
    float product = 1.0;

    cout << "Enter 5 floating point numbers: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> *(ptr + i);
    }

    cout << endl;

    cout << "Displaying the Array: ";
    for (int i = 0; i < 5; i++)
    {
        cout << *(ptr + i) << ", ";
    }

    cout << endl;

    cout << "\n The half of the input of the array entered:  ";
    for (int i = 0; i < 5; i++)
    {
        *(ptr + i) /= 2;
        cout << *(ptr + i) << ", ";
        product *= *(ptr + i);
    }

    cout << endl;

    cout << "\n The Product is: " << product << endl;

    return 0;
}


