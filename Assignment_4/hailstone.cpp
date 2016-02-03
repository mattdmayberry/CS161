/*******************************************************
 * Author: Matt Mayberry
 * Date: 2/1/15
 * Description: CS161_Assignment4_hailstone
********************************************************/

// This program performs a hailstone sequence until
// it arrives at 1

#include <iostream>
using namespace std;

int hailstoneCounter (int num);

int main()
{
   int input, totalSteps; 

   // Get a number from the user
   cout << "Enter a positive integer to begin the sequence:  \n";
   cin >> input;
  
   // Send the user input to the hailStoneCounter function
   totalSteps = hailstoneCounter(input);

   // Display steps to user
   cout << "\n------------------------------------------------------------\n";
   cout << totalSteps << " loops were needed for the sequence to reach 1.";
   cout << "\n------------------------------------------------------------\n";

   return 0;
} 

/*********************************************************
*                    hailstoneCounter                    *
*      This function counts the steps to work through a  * 
*            hailstone sequence and arrive at 1          *
*********************************************************/
int hailstoneCounter (int num)
{
   static int counter = 0;
   cout << "Beginning sequence >>\n";
 
   while(num != 1)
   {
      
      if(num % 2 == 0)
      {   
         num = num / 2;
         ++counter;  
      }
      else   
      {
         num = (num * 3) + 1;
         ++counter;
      }
   }      
   return counter;
} 
             
