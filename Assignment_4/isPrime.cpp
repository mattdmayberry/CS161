/************************************************
 * Author: Matt Mayberry
 * Date: 1/31/2015
 * Description: CS161_Assignment4_isPrime
************************************************/

// This program takes a user input integer
// and determines if it is a prime number

#include<iostream>
using namespace std;

int isPrime(int num);

int main()
{
   int num;

   // Get number from user
   cout << "\nEnter a number: \n";
   cin >> num;

   // Send number to isPrime function
   isPrime(num);
   return 0;
}
   

/**************************************************
*                   isPrime                       *
*   This function determines if a number is prime *
**************************************************/
int isPrime(int num)
{            
   int div;

   if(num >= 2)
   for(div = 2; div <= num / 2; div++)
   if((num%div) == 0)
   break;

   if(num > 1 && (!(div <= num/2)))
   cout << "The number " << num << " is prime\n";
   else
   cout << "The number " << num << " is not prime\n";

}
 

