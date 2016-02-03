/***********************************************
 * Car.h
 * Created by Matthew D Mayberry on 2/8/15
 * CS161_400_W2015_Assignment5
 ***********************************************/

#ifndef CAR_H
#define CAR_H

#include <string>
using namespace std;

class Car
{
    
private:
    int year;
    int speed;
    std::string make;
    
public:
    Car();
    Car(int year, string make);
    void setYear(int yearIn);
    void setMake(string makeIn);
    void setSpeed(int spd);
    int getSpeed();
    int accelerate();
    int brake();
};

#endif