#include "Point.hpp"
#include <math.h>

float f_x(Point deger)
{
    return(deger.xCoordinate());
}

float f_y(Point deger)
{
    return(deger.yCoordinate());
}

double area( Point const a, Point const b, Point const c)
{
    float a_x = f_x(a);
    float a_y = f_y(a);

    float b_x = f_x(b);
    float b_y = f_y(b);

    float c_x = f_x(c);
    float c_y = f_y(c);

    return fabs(a_x * (b_y-c_y) + b_x*(c_y-a_y) + c_x*(a_y-b_y))/2.0;
}

float   in_linee(Point const n, Point const p)
{
    float (n_x) = (f_x(n));
    float (n_y) = (f_y(n));
    float (p_x) = (f_x(p));
    float (p_y) = (f_y(p));

    if (!(n_x - p_x))
        return (0);
    return (abs((p_y - n_y) / (p_x - n_x)));
}

bool bsp( Point const a, Point const b, Point const c, Point const p)
{
    double A = area(a,b,c);
    double A1 = area(p,b,c);
    double A2 = area(a,p,c);
    double A3 = area(a,b,p);

    float p_x = f_x(p);
    float p_y = f_y(p);

    float a_x = f_x(a);
    float a_y = f_y(a);

    float b_x = f_x(b);
    float b_y = f_y(b);

    float c_x = f_x(c);
    float c_y = f_y(c);

    if ((in_linee(a, p) == in_linee(b, p)) || (in_linee(a,p) == in_linee(c, p))  || (in_linee(b, p) == in_linee(c, p)))
        return (false);
    if (A == (A1+ A2+ A3) && (p_x != a_x || p_y != a_y) && (p_x != b_x || p_y != b_y) && (p_x != c_x || p_y != c_y))
        return(true);
    else
        return(false);
}
