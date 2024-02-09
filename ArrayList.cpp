#include "ArrayList.h"
#include <iostream>

using namespace std;

// Constructor
ArrayList::ArrayList() 
{
    arr = new int[1];
    capacity = 1;
    current = 0;
}

// Function to add an element at the last
void ArrayList::add(int data)
{
    if (current == capacity)
    {
        int* temp = new int[2 * capacity];

        // Copying old array elements to new array
        for (int i = 0; i < capacity; i++) 
        {
            temp[i] = arr[i];
        }

        // Deleting previous array
        delete[] arr;
        capacity *= 2;
        arr = temp;
    }

    // Inserting data
    arr[current] = data;
    current++;
}

// Function to delete last element
void ArrayList::remove()
{
    current--;
}

// Function to print the ArrayList
void ArrayList::print() 
{
    for (int i = 0; i < current; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
