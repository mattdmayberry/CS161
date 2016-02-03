/***********************************************
 * LineSegment.cpp
 * Created by Matthew D Mayberry on 2/14/15
 * CS161_400_W2015_Assignment6
 ***********************************************/

#include "LineSegment.h"
#include "Point.h"
#include <iostream>
#include <cmath>

using namespace std;


LineSegment::LineSegment()
{
    Point p1;
    Point p2;
    setEnd1(p1);
    setEnd2(p2);
}

LineSegment::LineSegment(Point p1, Point p2)
{
    setEnd1(p1);
    setEnd2(p2);
}

void LineSegment::setEnd1(Point p1)
{
    end1 = p1;
}

void LineSegment::setEnd2(Point p2)
{
    end2 = p2;
}

Point LineSegment::getEnd1()
{
    return end1;
}

Point LineSegment::getEnd2()
{
    return end2;
}
double LineSegment::slope()
{
    double x1, x2, y1, y2;
    double m; // slope
    x1 = end1.getXCoord();
    y1 = end1.getYCoord();
    x2 = end2.getXCoord();
    y2 = end2.getYCoord();
    
    // Calculate slope
    // m  = (y2 - y1) / (x2 - x1)
    m = (y2 - y1) / (x2 - x1);
    
    return m;
}

double LineSegment::length()
{
    return end1.distanceTo(end2);
}

int main()
{
    double x1, y1, x2, y2;
    
    // Get coordinates from the user
    cout << "Input the X coordinate for your first point: " << endl;
    cin >> x1;
    cout << "Input the Y coordinate for your first point: " << endl;
    cin >> y1;
    cout << "Input the X coordinate for your second point: " << endl;
    cin >> x2;
    cout << "Input the Y coordinate for your second point: " << endl;
    cin >> y2;
    
    Point p1(x1,y1); //create first point using non-default constructor
    Point p2(x2,y2);
    LineSegment ls1(p1,p2);
    
    cout << "The length of the line is " << ls1.length() << endl;
    // Check if line is vertical
    if( isinf(ls1.slope()) )
        cout << "The slope of the line is infinity" << endl;
    else
        cout << "The slope of the line is " << ls1.slope() << endl;
}

