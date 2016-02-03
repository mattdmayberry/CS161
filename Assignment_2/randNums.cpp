/*******************************************
 ** Author: Matt Mayberry
 ** Date: 1/17/15
 ** Description: CS161_Assignment2_randNums
*******************************************/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// This program asks the user for an upper and lower
// bound and then generates five random numbers that
// are between those numbers.

int main()
{

   int upper, lower, num1, num2, num3, num4, num5;
   unsigned seed;

      //  Ask the user to input an upper and lower bound
      cout << "Input lower bound:  "; 
      cin >> lower; 
      cout << "Input upper bound:  "; 
      cin >> upper; 

      // set the random generator seed
      seed = time(0);
      srand(seed);

      // Generate 5 random numbers
      num1 = rand() % ((upper - 1) - lower) + (lower + 1);
      num2 = rand() % ((upper - 1) - lower) + (lower + 1);
      num3 = rand() % ((upper - 1) - lower) + (lower + 1);
      num4 = rand() % ((upper - 1) - lower) + (lower + 1);
      num5 = rand() % ((upper - 1) - lower) + (lower + 1);

      //  Display 5 random numbers
      cout << num1 << endl;
      cout << num2 << endl;
      cout << num3 << endl;
      cout << num4 << endl;
      cout << num5 << endl;

return 0;

}


 
