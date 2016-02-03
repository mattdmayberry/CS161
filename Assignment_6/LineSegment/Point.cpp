/***********************************************
 * Point.cpp
 * Created by Matthew D Mayberry on 2/14/15
 * CS161_400_W2015_Assignment6
 ***********************************************/

#include "Point.h"
#include <iostream>
#include <cmath>

using namespace std;

Point::Point()
{
    x = 0;
    y = 0;
}

Point::Point(double x, double y)
{
    setXCoord(x);
    setYCoord(y);
}

void Point::setXCoord(double setX)
{
    x = setX;
}

void Point::setYCoord(double setY)
{
    y = setY;
}

double Point::getYCoord()
{
    return y;
}

double Point::getXCoord()
{
    return x;
}

double Point::distanceTo(Point p2)
{
    double x1, y1, x2, y2, d;
    x1 = x;
    y1 = y;
    x2 = p2.getXCoord();
    y2 = p2.getYCoord();
    
    // d = (x2 = x1)^2 + (y2 - y1)^2
    d = sqrt(((x2 - x1) * (x2-x1)) + ((y2 - y1) * (y2 -y1)));
    
    return d;
}

