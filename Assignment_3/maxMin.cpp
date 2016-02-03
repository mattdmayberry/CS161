/**********************************************
 * Author: Matt Mayberry
 * Date: 1/24/15
 * Description: CS_161_400_Assignment3_maxMin
**********************************************/

// This program asks the user how many numbers
// they would like to input and then displays
// the largest and smallest numbers entered

#include <iostream>
#include <cfloat>
using namespace std;

int main()
{  

   double inputQty, count, num, max,
          min = DBL_MAX; 
   
   // Get number of values the user wants to enter
   cout << "\nHow many numbers would you like to enter?:  \n";
   cin >>  inputQty;

   // Ask user to input values
   for (count = 1; count <= inputQty; count++) 
   {  cout << "\nEnter a number:  ";
      cin >> num;
         if (num > max)   
             max = num;
         if (num < min)
             min = num;
   }
   
   // Display high and low values to user
   cout << "\n-----------------------------------\n";
   cout << "The highest value entered was " << max << endl;
   cout << "The lowest value entered was " << min << endl;
   cout << "\n-----------------------------------\n";
   

   return 0;
}

 
   


