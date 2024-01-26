
#include "Point.h"
#include <cmath>
using namespace std;

Point::Point(double x, double y) : x(x), y(y) {}

double Point::getX() const 
{
    return x;
}

double Point::getY() const
{
    return y;
}

void Point::setX(double x)
{
    this->x = x;
}

void Point::setY(double y)
{
    this->y = y;
}

double Point::distance(const Point& p) const
{
    return sqrt(pow(x - p.x, 2) + pow(y - p.y, 2));
}