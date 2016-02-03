/***********************************************
 * Date.cpp
 * Created by Matthew D Mayberry on 2/8/15
 * CS161_400_W2015_Assignment5
 ***********************************************/

#include "Date.hpp"
#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;


Date::Date(void)
{
    day = 1;
    month = 1;
    year = 2001;
}

void Date::setMonth(int m)
{
    if (m >= 1 && m <= 12)
    {
        month = m;
    }
    else
    {
        month = 0;
        cout << "Invalid input!  Out of range" << endl;
    }
}

void Date::setDay(int m, int d)
{
    // 31 day input validation
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        if (d >=1 && d <= 31){
            day = d;
        }
        
        else{
            day = 0;
            cout << "Invalid input!  Out of range" << endl;
        }
        
    }
    
    // 30 day input validation
    if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        if (d >=1 && d <= 30)
        {
            day = d;
        }
                
        else
        {
            day = 0;
            cout << "Invalid input!  Out of range" << endl;
        }
    }
    
    // 2 day input validation
    if (month == 2)
    {
        if (d >=1 && d <= 28)
        {
            day = d;
        }
                
        else{
            day = 0;
            cout << "Invalid input!  Out of range" << endl;
        }
    }
}

void Date::setYear(int y)
{
    if (y > 1)
    {
        year = y;
    }
        else {
            year = 0;
            cout << "Invalid input!  Out of range" << endl;
        }
}

int Date::print1 ()
{
    // Format 1/1/2001
    year = year % 100;
    cout << "Formatted Date: " << endl;
    cout << month << "/" << day << "/" << year << endl;
    return 0;
}

int Date::print2 ()
{
    // Format January 1, 2001
    
    switch(month)
    {
        case 1:
            cout << "Formatted Date: " << endl;
            cout << "January" << ", " << day << ", " << year << endl;
            cout << "------------------------------------------" << endl;
            break;
            
        case 2:
            cout << "Formatted Date: " << endl;
            cout << "February" << ", " << day << ", " << year << endl;
            cout << "------------------------------------------" << endl;
            break;
            
        case 3:
            cout << "Formatted Date: " << endl;
            cout << "March" << ", " << day << ", " << year << endl;
            cout << "------------------------------------------" << endl;
            break;
            
        case 4:
            cout << "Formatted Date: " << endl;
            cout << "April" << ", " << day << ", " << year << endl;
            cout << "------------------------------------------" << endl;
            break;
            
        case 5:
            cout << "Formatted Date: " << endl;
            cout << "May" << ", " << day << ", " << year << endl;
            cout << "------------------------------------------" << endl;
            break;
            
        case 6:
            cout << "Formatted Date: " << endl;
            cout << "June" << ", " << day << ", " << year << endl;
            cout << "------------------------------------------" << endl;
            break;
            
        case 7:
            cout << "Formatted Date: " << endl;
            cout << "July" << ", " << day << ", " << year << endl;
            cout << "------------------------------------------" << endl;
            break;
        
        case 8:
            cout << "Formatted Date: " << endl;
            cout << "August" << ", " << day << ", " << year << endl;
            cout << "------------------------------------------" << endl;
            break;
            
        case 9:
            cout << "Formatted Date: " << endl;
            cout << "September" << ", " << day << ", " << year << endl;
            cout << "------------------------------------------" << endl;
            break;
            
        case 10:
            cout << "Formatted Date: " << endl;
            cout << "October" << ", " << day << ", " << year << endl;
            cout << "------------------------------------------" << endl;
            break;
            
        case 11:
            cout << "Formatted Date: " << endl;
            cout << "November" << ", " << day << ", " << year << endl;
            cout << "------------------------------------------" << endl;
            break;
            
        case 12:
            cout << "Formatted Date: " << endl;
            cout << "December" << ", " << day << ", " << year << endl;
            cout << "------------------------------------------" << endl;
            break;
    }
    return 0;
}

int Date::print3 (){
    // Format 1 January 2001
    
    switch(month)
    {
        case 1:
            cout << "Formatted Date: " << endl;
            cout << day << " " << "January" << " " << year << endl;
            cout << "------------------------------------------" << endl;
            break;
            
        case 2:
            cout << "Formatted Date: " << endl;
            cout << day << " " << "February" << " " << year << endl;
            cout << "------------------------------------------" << endl;
            break;
            
        case 3:
            cout << "Formatted Date: " << endl;
            cout << day << " " << "March" << " " << year << endl;
            cout << "------------------------------------------" << endl;
            break;
            
        case 4:
            cout << "Formatted Date: " << endl;
            cout << day << " " << "April" << " " << year << endl;
            cout << "------------------------------------------" << endl;
            break;
            
        case 5:
            cout << "Formatted Date: " << endl;
            cout << day << " " << "May" << " " << year << endl;
            cout << "------------------------------------------" << endl;
            break;
            
        case 6:
            cout << "Formatted Date: " << endl;
            cout << day << " " << "June" << " " << year << endl;
            cout << "------------------------------------------" << endl;
            break;
            
        case 7:
            cout << "Formatted Date: " << endl;
            cout << day << " " << "July" << " " << year << endl;
            cout << "------------------------------------------" << endl;
            break;
            
        case 8:
            cout << "Formatted Date: " << endl;
            cout << day << " " << "August" << " " << year << endl;
            cout << "------------------------------------------" << endl;
            break;
            
        case 9:
            cout << "Formatted Date: " << endl;
            cout << day << " " << "September" << " " << year << endl;
            cout << "------------------------------------------" << endl;
            break;
            
        case 10:
            cout << "Formatted Date: " << endl;
            cout << day << " " << "October" << " " << year << endl;
            cout << "------------------------------------------" << endl;
            break;
            
        case 11:
            cout << "Formatted Date: " << endl;
            cout << day << " " << "November" << " " << year << endl;
            cout << "------------------------------------------" << endl;
            break;
            
        case 12:
            cout << "Formatted Date: " << endl;
            cout << day << " " << "December" << " " << year << endl;
            cout << "------------------------------------------" << endl;
            break;
    }
    return 0;
}

int main()
{
    // Create new date object
    Date date1;
    int m, d, y, format;
    
    // Get day, month, year
    cout << "------------------------------------------" << endl;
    cout << "Let's enter a date: " << endl;
    cout << "Enter month (1 - 12): " << endl;
    cin >> m;
    date1.setMonth(m);
    cout << "Enter day: " << endl;
    cin >> d;
    date1.setDay(m,d);
    cout << "Enter year: " << endl;
    cin >> y;
    date1.setYear(y);
    
    // Get format from user
    cout << "How do you want to format the date?" << endl;
    cout << "1) 1/1/2001" << endl;
    cout << "2) January 1, 2001" << endl;
    cout << "3) 1 January 2001" << endl;
    cout << "4) Quit" << endl;
    cout << "Please make a selection (1, 2, 3 or 4): " << endl;
    cin >> format;
    while (format > 4 || format < 1){
        cout << "Selection not valid!" << endl;
        cout << "How do you want to format the date?" << endl;
        cout << "1) 1/1/2001" << endl;
        cout << "2) January 1, 2001" << endl;
        cout << "3) 1 January 2001" << endl;
        cout << "4) Quit" << endl;
        cout << "Please make a selection (1, 2, 3 or 4): " << endl;
        cin >> format;
    }
    
    // Send data print functions for formatting
    switch(format)
    {
            
        case 1:
            date1.print1();
            break;
        
        case 2:
            date1.print2();
            break;
            
        case 3:
            date1.print3();
            break;
            
        case 4:
            return 0;
    }
    
    return 0;
}