/***********************************************
 * Car.cpp
 * Created by Matthew D Mayberry on 2/13/15
 * CS161_400_W2015_Assignment6
 ***********************************************/

#include "Car.h"
#include <iostream>
#include <string>

using namespace std;


Car::Car(int year, string make)
{
    setYear(year);
    setMake(make);
    setSpeed(0);
}

//Car::Car() : year(0), make(""), speed(0) {}
Car::Car()
{
    setYear(0);
    setMake("");
    setSpeed(0);
}

void Car::setYear(int yearIn)
{
    year = yearIn;
}

void Car::setMake(string makeIn)
{
    make = makeIn;
    
}

void Car::setSpeed(int spd)
{
    speed = spd;
}

int Car::getSpeed()
{
    cout << "Your currently driving " << speed << " mph." << endl;
    return 0;
}

int Car::accelerate()
{
    if(speed <= 70)
    {
        speed = speed + 10;
    }
    else
    {
        cout << "max speed is 80 mph" << endl;
    }
    return 0;
}

int Car::brake()
{
    if(speed >= 10)
    {
        speed = speed - 10;
    }
    else
    {
        cout << "min speed is 0 mph" << endl;
    }
    return 0;
    
}

int main()
{
    // Create new Car object
    Car car1;
    int year;
    string make;
    int selection;
   
    // Get year and make from user
    cout << "Enter the year of your car: " << endl;
    cin >> year;
    car1.setYear(year);
    cout << "Enter the make of your car: " << endl;
    cin >> make;
    car1.setMake(make);
    
    // Prompt user with speed options
    cout << "Lets drive your car!" << endl;
    do
    {
        cout << "Please select your choice (1, 2 or 3): " << endl;
        cout << "1) Accelerate" << endl;
        cout << "2) Brake" << endl;
        cout << "3) Quit" << endl;
        cin >> selection;
        
        switch (selection)
        {
            case 1:
                car1.accelerate();
                car1.getSpeed();
                break;
                
            case 2:
                car1.brake();
                car1.getSpeed();
                break;
        }
        
    } while (selection != 3);
    
    return 0;
}