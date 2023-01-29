#include "Point.hpp"

Point::Point()
{
    this->x = 0;
    this->y = 0;
}

Point::Point(double x, double y)
{
    this->x = x;
    this->y = y;
}

int    Point::xCoordinate()
{
    return(this->x);
}

int    Point::yCoordinate()
{
    return(this->y);
}