/***********************************************
 * Box.cpp
 * Created by Matthew D Mayberry on 2/7/15
 * CS161_400_W2015_Assignment5
 ***********************************************/

#include "Box.hpp"
#include <iostream>
#include <stdio.h>
#include <ctime>
#include <cstdlib>

using namespace std;

Box::Box(void){
    height = 1;
    width = 1;
    length = 1;
}

void Box::setHeight(double h){
    if (h > 0){
        height = h;
    }
    else{
        height = 0;
        cout << "Height cannot be negative!" << endl;
    }
}

void Box::setWidth(double w){
    if (w > 0){
        width = w;
    }
    else{
        width = 0;
        cout << "Width cannot be negative!" << endl;
    }
}

void Box::setLength(double l){
    if (l > 0){
        length = l;
    }
    else{
        length = 0;
        cout << "Length cannot be negative!" << endl;
    }
}

double Box::getVolume(){
    return length * width * height;
}

double Box::getSurfaceArea(){
    return length * width * 6;
}

int main()
{
    double bH, bW, bL;
    
    Box Box1;
    
    // Get height from user
    cout << "Enter the height of the box in inches: " << endl;
    cin >> bH;
    Box1.setHeight(bH);
    
    // Get width from user
    cout << "Enter the width of the box in inches: " << endl;
    cin >> bW;
    Box1.setWidth(bW);
    
    // Get length from user
    cout << "Enter the length of the box in inches: " << endl;
    cin >> bL;
    Box1.setLength(bL);
    
    // Display volume and surface area
    cout << "The volume of the box is " << Box1.getVolume() << " inches" << endl;
    cout << "The surface area of the box is " << Box1.getSurfaceArea() << " inches" << endl;
    
    return 0;
    
}