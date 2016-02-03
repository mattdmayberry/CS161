/************************************************
 * Author: Matt Mayberry
 * Date: 1/23/15
 * Description: CS161_400_Assignment3_numGuess
************************************************/

// This program generates a random number 
// between 1 and 100 and asks the user to 
// guess the number.


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main ()
{
   srand(time(NULL));    
   int number = rand() % 100 + 1;
   int guess;

   // Get user guess 
   cout << "Guess a number between 1 and 100:  " << endl;
   cin >> guess;

   // Check user guess 
   while (guess > number)
   {   cout << "Too high! Try again.\n";
       cout << "Guess another number:  ";
       cin >> guess;
   }
   while (guess < number)
   {   cout << "Too low! Try again.\n";
       cout << "Guess another number:  ";
       cin >> guess;
   }
   if (guess = number)
   {   cout << "\n***********************************\n";
       cout << "Yes, the number is " << number << endl;
       cout << "\nNice Work!!\n";
       cout << "\n***********************************\n";
   }

   return 0;
}

