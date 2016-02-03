/***********************************************
 * Author: Matt Mayberry
 * Date: 1/31/15
 * Description: CS161_Assignment4_isPalindrome
*************************************************/

// This program tells the user if their input word
// is a palindrome 


#include <iostream>
#include <string>
using namespace std;

// function prototype 
bool isPalindrome (string input); 

int main()
{

   bool palindromeResult; 
   string input;  
 
   //  Get word from user
   cout << "\nEnter a word to determine if it is a palindrome: \n";
   cin >> input;

   // Display result to user
   cout << "You entered " << input << ". \n";
   
   // Send word to isPalindrom functioin
   isPalindrome(input);
   palindromeResult = isPalindrome(input);

   // Display result to user
   cout << "\n--------------------------------------------\n";
   if(palindromeResult > 0)
      cout << input << " is a palindrome.\n";
   
   if(palindromeResult == 0) 
      cout << input << " is not a palindrome.\n";
   cout << "\n--------------------------------------------\n";
   
   return 0;
 }

/*********************************************
*              isPalindrome                  *
*     this function determines if a word     *
*             is a palindrome                *
*********************************************/

bool isPalindrome (string input) 
{
   if(input == string(input.rbegin(),input.rend())) 
      return true; 

   else
      return false;
}              
