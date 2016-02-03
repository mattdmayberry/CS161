/*******************************
 * Author: Matt Mayberry
 * Date: 1/17/15
 * Description: CS161_Assignment2_ticketIncome
*******************************/

// Calculate total softball seat sales
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{ 

   int classA, 
       classB, 
       classC;

      // Get the quantity of sales for each seat type
      cout << "How many Class A seats were sold?\n"; 
      cin >> classA; 
      cout << "How many Class B seats were sold?\n";
      cin >> classB; 
      cout << "How many Class C seats were sold?\n";
      cin >> classC; 

   float classAcost = 15;
   float classBcost = 12;
   float classCcost = 9;

   float income;

     
      // Calculate total sales
      income = (classA * classAcost) + (classB * classBcost) + (classC * classCcost);
      cout << fixed << setprecision(2) << "Total ticket income: $" << income << endl;


  return 0;
} 
 
