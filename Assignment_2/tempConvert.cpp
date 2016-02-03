/*************************************************************
 ** Author: Matt Mayberry
 ** Date: 1/17/15
 ** Description: CS161_Assignment2_tempConvert
*************************************************************/

#include <iostream>
using namespace std;

int main()
{

   //  This program convert celcius temperatures to fahrenheit 
   double       cTemp,
                fTemp;
   float        fCoef = (9.f/5.f);
             
   //  Get celcius temp from user
   cout << "enter a temperature in degrees Celcius" << endl;
   cin >>  cTemp; 

   //  Calculate fahrenheit temp
   fTemp = (fCoef * cTemp)+32; 
   
   //  Display fahrenheit temp
   cout << cTemp << " degress Celcius  = " << fTemp << "degrees Fahrenheit.\n";

   return 0;
}  
