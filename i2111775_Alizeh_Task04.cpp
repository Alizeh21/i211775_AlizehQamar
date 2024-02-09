// i2111775_Alizeh_Task04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
#include "ArrayList.h"
using namespace std;

int main() 
{
    ArrayList arrList;

    cout << "Adding the elements in the arrayalist " << endl;

    cout << endl;
    // Adding elements to the ArrayList
    arrList.add(1);
    arrList.add(2);
    arrList.add(3);
    arrList.add(4);
    arrList.add(5);

    // Printing the ArrayList
    arrList.print();

    // Removing the last element

  
    arrList.remove();
    cout << endl;
    cout << "Printing the ArrayList after removing an element" << endl;
    arrList.print();

    return 0;
}


