/***********************************************
* DiceCup.cpp
* Created by Matthew D Mayberry on 2/7/15
* CS161_400_W2015_Assignment5
***********************************************/

#include "DiceCup.hpp"
#include <iostream>
#include <stdio.h>
#include <ctime>
#include <cstdlib>


using namespace std;

    DiceCup::DiceCup(void){
        numDice = 1;
        numFaces = 2;
    }

    void DiceCup::setNumDice (int nD){
        if (nD > 0){
            numDice = nD;
        }
        else{
            numDice = 0;
            cout << "Number of dice cannot be negative!" << endl;
        }
    }
    void DiceCup::setNumFaces (int nF){
        if (nF > 0){
            numFaces = nF;
        }
        else{
            numFaces = 0;
            cout << "Number of faces cannot be negative!" << endl;
        }
    }
    int DiceCup::rollDice(){
        int sum = 0;
        for(int i = 0; i < numDice; ++i){
            sum += (rand()%numFaces)+1;
        }
        
        return sum;
    }

int main()
{
    srand(time_t(NULL));
    int nD, nF, numTimes, result;
    DiceCup Cup1;
    
    // Get number of dice from user
    cout << "Enter the number of dice you would like to roll: " << endl;
    cin >> nD;
    Cup1.setNumDice(nD);
    
    // Get number of faces from user
    cout << "Enter the number of faces on each die: " << endl;
    cin >> nF;
    Cup1.setNumFaces(nF);
    
    // Get number of times from the user
    cout << "How many times would you like to roll the dice?: " << endl;
    cin >> numTimes;
    
    for(int i = 0; i < numTimes; ++i){
        result = Cup1.rollDice();
        cout << "Total value in roll Number" << i + 1 << " is " << result << endl;
    }
    
    return 0;
}