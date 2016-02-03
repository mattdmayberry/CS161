//
//  main.cpp
//  findMode
//
//  Created by Matthew D Mayberry on 2/24/15.
//  Copyright (c) 2015 Matthew D Mayberry. All rights reserved.
//

#include <iostream>

using namespace std;

/*********************************************
 *               calculateMode               *
 * This function finds the mode of an array  *
 ********************************************/

void sortArray(int array[], int size)
{
    int temp;
    bool swap;
    do
    { swap = false;
        for (int count = 0; count < (size - 1); count++)
        {
            if (array[count] > array[count + 1])
            {
                temp = array[count];
                array[count] = array[count + 1];
                array[count + 1] = temp;
                swap = true;
            }
        }
    } while (swap); // Loop again if a swap occurred on this pass.
    
    calculateMode(array[], size);
}




/*********************************************
 *               calculateMode               *
 * This function finds the mode of an array  *
 ********************************************/

void calculateMode(int array[], int size)
{
    
    int counter = 1;
    int max = 0;
    int mode = array[0];
    for (int pass = 0; pass < size - 1; pass++)
    {
        if ( array[pass] == array[pass+1] )
        {
            counter++;
            if ( counter > max )
            {
                max = counter;
                mode = array[pass];
            }
        } else
            counter = 1; // reset counter.
    }
    cout << "The mode is: " << mode << endl;
}



/*********************************************
 *                   main                    *
 ********************************************/

int main()
{
    // Get
}