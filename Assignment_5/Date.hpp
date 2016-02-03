/***********************************************
 * Date.h
 * Created by Matthew D Mayberry on 2/8/15
 * CS161_400_W2015_Assignment5
 ***********************************************/

#ifndef DATE_H
#define DATE_H

class Date
{

private:
    int month;
    int day;
    int year;
   
public:
    Date();
    void setMonth(int m);
    void setDay(int m, int d);
    void setYear(int y);
    int print1 ();
    int print2 ();
    int print3 ();
    
};


#endif 
