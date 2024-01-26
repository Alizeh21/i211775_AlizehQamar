// i211775_q2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Point.h"
#include <iostream>
using namespace std;

int main()
{
    Point p1(1.0, 2.0);
    Point p2(4.0, 6.0);

    cout << "Point 1: (" << p1.getX() << ", " << p1.getY() << ")" << endl;
    cout << "Point 2: (" << p2.getX() << ", " << p2.getY() << ")" << endl;

    cout << endl;

    double dist = p1.distance(p2);
    cout << "The distance between Point 1 and Point 2 is: " << dist << endl;

    return 0;
}

