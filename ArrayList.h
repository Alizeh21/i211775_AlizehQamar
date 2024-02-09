#pragma once

class ArrayList
{
private:

    int* arr;
    int capacity;
    int current;

public:
   
    ArrayList();
    void add(int data);
    void remove();
    void print();
};


