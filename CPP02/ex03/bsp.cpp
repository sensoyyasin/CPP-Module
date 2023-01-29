#include "Point.hpp"

float f_x(Point deger)
{
    return(deger.xCoordinate());
}

float f_y(Point deger)
{
    return(deger.yCoordinate());
}

bool bsp( Point const a, Point const b, Point const c, Point const p)
{
    float b_x = f_x(b) - f_x(a);
    float b_y = f_y(b) - f_y(a);

    float c_x = f_x(c) - f_x(a);
    float c_y = f_y(c) - f_y(a);

    float p_x = f_x(p) - f_x(a);
    float p_y = f_y(p) - f_y(a);

    float d = (b_x * c_y) - (c_x * b_y);

	float WA = (p_x * (b_y - c_y) + p_y * (c_x - b_x) + (b_x * c_y) - (c_x * b_y)) / d;
	float WB = ((p_x * c_y - p_y * c_x) / d);
	float WC = (((p_y * b_x) - (p_x * b_y)) / d);

    if ((WA >= 0 && WA <= 1) && (WB >= 0 && WB <= 1) && (WC >= 0 && WC <= 1))
        return (true);
    else
        return (false);
}