/***********************************************
 * LineSegment.h
 * Created by Matthew D Mayberry on 2/14/15
 * CS161_400_W2015_Assignment6
 ***********************************************/

#ifndef __LINESEGMENT_H
#define __LINESEGMENT_H

#include <stdio.h>
#include "Point.h"

class LineSegment
{
private:
    Point end1;
    Point end2;
    double slope1;
    double length1;
    
public:
    LineSegment();
    LineSegment(Point end1, Point end2);
    void setEnd1(Point end1);
    void setEnd2(Point end2);
    Point getEnd1();
    Point getEnd2();
    double slope();
    double length();
    
};

#endif
