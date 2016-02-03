/**********************************************
 * Author: Matt Mayberry
 * Date: 1/31/15
 * Description: CS161_Assignment4_fallDistance
************************************************/

// This function calculates the distance an object
// has fallen in meters based on the time input
// by the user

#include <iostream>
#include <cmath>
using namespace std;

double fallDistance(double t);

const double g = 9.8;

int main()
{
   const double g = 9.8;
   double distance;
   double time;

   // Get the time from the user
   cout << "Enter the time in seconds that the object has fallen: \n";
   cin >>  time;

   // Send time to fallDistance function
   distance = fallDistance(time); 
  
   // Display the distance to the user
   cout << "\nThe object fell " << distance << " meters\n";

   return 0;
}

/*********************************************
*                fallDistance                *
*  This function calculates fall distance    *
*********************************************/

double fallDistance(double t)
{
double distance;
             
   distance = ((0.5) * g * (pow(t,2)));
   return distance;
}
