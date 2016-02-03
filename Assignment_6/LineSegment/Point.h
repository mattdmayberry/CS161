/***********************************************
 * Point.h
 * Created by Matthew D Mayberry on 2/14/15
 * CS161_400_W2015_Assignment6
 ***********************************************/

#ifndef __POINT_H
#define __POINT_H

#include <stdio.h>

class Point
{
private:
    double x;
    double y;
    
public:
    Point(double x, double y);
    Point();
    void setXCoord(double x);
    void setYCoord(double y);
    double getYCoord();
    double getXCoord();
    double distanceTo(Point p2);
};

#endif