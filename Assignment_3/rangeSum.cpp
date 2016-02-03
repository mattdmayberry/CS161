/***************************************************
 * Author: Matt Mayberry
 * Date: 1/23/15
 * Description: CS161_400_Assignment3_rangeSum
***************************************************/

// This program adds up the integers between an upper
// and lower bound input by the user

#include <iostream>

using namespace std;

int main()
{

   int num1, num2, ux, lx, sum;

   // Get the numbers from the user
   cout << "\nEnter an integer:  \n";
   cin >> num1;
   cout << "\nEnter another integer:  \n";
   cin >> num2;

   // Calculate upper and lower bound
   if (num1 > num2)
   {  ux = num1; // define upper bound
      lx = num2; // define lower bound
   }
   if (num2 > num1)
   {  ux = num2;
      lx = num1;
   }
   if (num1 == num2)
   cout << "\nError, the integers entered are the same\n";  

   // Calculate the sum of all integers between
   // ux and lx including ux and lx
   sum = 0;
   for (int counter = lx; counter < (ux + 1); counter++)
   sum += counter;
 
   // Prompt user with outputs 
   cout << "\n--------------------------------------------------\n";
   cout << "\nThe sum of integers from " << num1 << " to " << num2 << " = " << sum << endl; 
   cout << "\n---------------------------------------------------\n";
   
   return 0;
}
    
    
