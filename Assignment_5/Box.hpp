/***********************************************
 * Box.h
 * Created by Matthew D Mayberry on 2/7/15
 * CS161_400_W2015_Assignment5
 ***********************************************/


#ifndef BOX_H
#define BOX_H

class Box
{

private:
    double height;
    double width;
    double length;
    
public:
    Box();
    void setHeight(double h);
    void setWidth(double w);
    void setLength(double l);
    double getVolume();
    double getSurfaceArea();
    
};

#endif 
