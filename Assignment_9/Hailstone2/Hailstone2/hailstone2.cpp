/*******************************************************
 * Author: Matt Mayberry
 * Date: 3/8/15
 * Description: CS161_Assignment9_hailstone2
 ********************************************************/

// This program performs a hailstone sequence until
// it arrives at 1

#include <iostream>
using namespace std;

void hailstoneCounter (int num, int* counter);

int main()
{
    int input = 0;
    int counter = 0;
    
    // Get a number from the user
    cout << "Enter a positive integer to begin the sequence: " << endl;
    cin >> input;
    
    // Send the user input to the hailStoneCounter function
    hailstoneCounter(input, &counter);
    
    // Display steps to user
    cout << "\n------------------------------------------------------------\n";
    cout << counter << " loops were needed for the sequence to reach 1.";
    cout << "\n------------------------------------------------------------\n";
    
    return 0;
}

/*********************************************************
 *                    hailstoneCounter                    *
 *      This function counts the steps to work through a  *
 *            hailstone sequence and arrive at 1          *
 *********************************************************/
void hailstoneCounter (int num, int* counter)
{
    if(num != 1)
    {
        if(num % 2 == 0)
        {
            hailstoneCounter((num / 2), &++*counter);
        }
        else
        {
            hailstoneCounter(((num * 3) + 1), &++*counter);
        }
    }
} 

