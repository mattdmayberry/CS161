/********************************************
 * Author: Matt Mayberry
 * Date: 1/30/15
 * Description: CS161_Assignment4_smallSort
*********************************************/

// This program gets 3 integers from the user
// calls on a sort function and displays the
// sorted numbers

#include <iostream>

using namespace std;

// Sort function prototype
void sortValues(int num1, int num2, int num3);

int main()
{

   int value1, value2, value3;
 
// Get the numbers from the user
   cout << "Enter the first number (1 of 3): \n";
   cin >> value1; 
   cout << "\nEnter another number (2 of 3): \n";
   cin >> value2;
   cout << "\nEnter another number (3 of 3): \n";
   cin >> value3;
   cout << "\nYou entered: " << value1 << ", " << value2 << ", " << value3;

// Send values to sort function
   sortValues(value1, value2, value3);

   return 0;
}

/******************************************************
*                   sortValues                        *
* This function sorts 3 integers into ascending order *
*******************************************************/

void sortValues(int num1, int num2, int num3)
{

// Sort values 

   // 1 2 3
   if(num1 < num2 && num2 < num3)
   {
   cout << "\n-----------------------------------\n";
   cout << "\nYour entries have been sorted:\n";
   cout << num1 << " \n";
   cout << num2 << " \n";
   cout << num3 << " \n";
   cout << "\n-----------------------------------\n";
   }
 
   // 1 3 2
   if(num1 < num2 && num3 < num2)
   {
   cout << "\n----------------------------------\n"; 
   cout << "\nYour entries have been sorted:\n";
   cout << num1 << " \n";
   cout << num3 << " \n";
   cout << num2 << " \n";
   cout << "\n-----------------------------------\n";
   }
   
   // 2 1 3
   if(num2 < num1 && num1 < num3)
   {
   cout << "\n----------------------------------\n"; 
   cout << "\nYour entries have been sorted:\n";
   cout << num2 << " \n";
   cout << num1 << " \n";
   cout << num3 << " \n";
   cout << "\n----------------------------------\n";
   }

   // 2 3 1
   if(num2 < num3 && num3 < num1)
   {  
   cout << "\n----------------------------------\n"; 
   cout << "\nYour entries have been sorted:\n";
   cout << num2 << " \n";
   cout << num3 << " \n";
   cout << num1 << " \n"; 
   cout << "\n----------------------------------\n"; 
   }

   // 3 2 1
   if(num3 < num2 && num2 < num1)
   {
   cout << "\n----------------------------------\n"; 
   cout << "\nYour entries have been sorted:\n";
   cout << num3 << " \n";
   cout << num2 << " \n";
   cout << num1 << " \n";
   cout << "\n----------------------------------\n"; 
   }

   // 3 1 2
   if(num3 < num1 && num1 < num2)
   {
   cout << "\n----------------------------------\n"; 
   cout << "\nYour entries have been sorted:\n";
   cout << num3 << " \n";
   cout << num1 << " \n";
   cout << num2 << " \n";
   cout << "\n----------------------------------\n"; 
   }

}

 

 
