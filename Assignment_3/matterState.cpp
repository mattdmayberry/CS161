/*******************************************
 * Author: Matt Mayberry
 * Date 1/23/2015
 * Description: CS161_Assignment3_matterState
********************************************/

// This program identifies the matter state 
// for various substances based on user input
// temperature

#include <iostream>
using namespace std;

int main() 
{
   int temp;

   // Get temperature from user
   cout << "Please enter a temperature in degrees Fahrenheit: \n";
   cin >> temp; 
   cout << "\n--------------------------------------------------------\n";
  
   // Calculate matter state for ethyl alcohol
   if ( temp <= -173)
   cout << "* ethyl alcohol is a solid\n";
   if ( temp >= 172)
   cout << "* ethyl alcohol is a gas\n";
   if ( temp > -173 && temp < 172)
   cout << "* ethyl alcohol is a liquid\n";

   // Calculate matter state for mercury
   if (temp <= -38)
   cout << "* mercury is a solid\n";
   if (temp >= 676) 
   cout << "* mercury is a gas\n";
   if (temp > -38 && temp < 676)
   cout << "* mercury is a liquid\n";

   // Calculate matter state for oxygen 
   if ( temp <= -362)
   cout << "* oxygen is a solid\n";
   if ( temp >= -306)
   cout << "* oxygen is a gas\n";
   if ( temp > -362 && temp < -306)
   cout << "* oxygen is a liquid\n";

   // Calculate the matter state for water
   if ( temp <= 32)
   cout << "* water is a solid\n";
   if ( temp >= 212)
   cout << "* water is a gas\n";
   if ( temp > 32 && temp < 212)
   cout << "* water is a liquid\n";

   cout << "\n------------------------------------------------------\n";
 

return 0;

}

