#ifndef POINT_HPP
# define POINT_HPP

#include <iostream>
#include "cmath"

class Point
{
private:
    double x;
    double y;

public:
    Point();
    Point(double x, double y);
    ~Point(){};

    int   xCoordinate();
    int   yCoordinate();
    
    float f_x(Point deger);
    float f_y(Point deger);
};

bool bsp( Point const a, Point const b, Point const c, Point const p);

#endif