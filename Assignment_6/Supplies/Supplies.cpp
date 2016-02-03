/***********************************************
 * Supplies.cpp
 * Created by Matthew D Mayberry on 2/14/15
 * CS161_400_W2015_Assignment6
 ***********************************************/

#include "Supplies.h"
#include <iostream>

using namespace std;


Supplies::Supplies(int numT, int numW, int numF)
{
    setNumThingamajigs(numT);
    setNumWatchamacallits(numW);
    setNumFramistats(numF);
}

Supplies::Supplies()
{
    things = 100;
    watchs = 70;
    frams = 50;
}

void Supplies::setNumThingamajigs(int numT)
{
    things = numT;
}

void Supplies::setNumWatchamacallits(int numW)
{
    watchs = numW;
}

void Supplies::setNumFramistats(int numF)
{
    frams = numF;
}

int Supplies::printPartsOrder()
{
    cout << "----------------------------------------------------" << endl;
    cout << "                 *** Parts Order ***                " << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "The factory needs to order: " << endl;
    if(things < 100)
    {
        cout << 100 - things << " :Thingamajigs " << endl;
    }
    else
    {
        cout << 0 << " :Thingamajigs" << endl;
    }
    if (watchs < 70)
    {
        cout << 70 - watchs << " :Watchamacallits" << endl;
    }
    else
    {
        cout << 0 << " :Watchamacallits" << endl;
    }
    if (frams < 50)
    {
        cout << 50 - frams << " :Framistats" << endl;
    }
    else
    {
        cout << 0 << " :Framistats: " << endl;
    }
    cout << "----------------------------------------------------" << endl;
    return 0;
}

int Supplies::produceThing1(int numThing1)
{
    int numT, numW, numF;
    
    numT = numThing1 * 1;
    numW = numThing1 * 2;
    numF = numThing1 * 1;
    
    if(numT > things|| numW > watchs  || numF > frams)
    {
        cout << "----------------------------------------------------" << endl;
        cout << "Not enough parts to produce " << numThing1 << " units of Product 1" << endl;
        cout << "----------------------------------------------------" << endl;
    }
    else
    {
    things = numT;
    watchs = numW;
    frams = numF;
    cout << "----------------------------------------------------" << endl;
    cout << numThing1 << " units of Product 1 produced" << endl;
    cout << "----------------------------------------------------" << endl;
    }
    
    return 0;
}

int Supplies::produceThing2(int numThing2)
{
    int numT, numF;
    
    numT = numThing2 * 2;
    numF = numThing2 * 1;
    
    if(numT > things || numF > frams)
    {
        cout << "----------------------------------------------------" << endl;
        cout << "Not enough parts to produce " << numThing2 << " units of Product 2" << endl;
        cout << "----------------------------------------------------" << endl;
    }
    else
    {
    things = numT;
    frams = numF;
    cout << "----------------------------------------------------" << endl;
    cout << numThing2 << " units of Product 2 produced" << endl;
    cout << "----------------------------------------------------" << endl;
    }
    
    return 0;
}


int main()
{
    
    Supplies supplies1;
    
    int numT, numW, numF, selection, numThing1, numThing2;
    
    // Get number of parts from the user
    cout << "How many thingamajigs in inventory?: " << endl;
    cin >> numT;
    supplies1.setNumThingamajigs(numT);
    cout << "How many watchamacallits in inventory?: " << endl;
    cin >> numW;
    supplies1.setNumWatchamacallits(numW);
    cout << "How many framistats in inventory?: " << endl;
    cin >> numF;
    supplies1.setNumFramistats(numF);
    
    // Prompt user with selection options
    do
    {
        cout << "Make a selection to manage the factory (1 - 4): " << endl;
        cout << "1) Print Parts Order" << endl;
        cout << "2) Produce Product 1" << endl;
        cout << "3) Produce Product 2" << endl;
        cout << "4) Exit factory" << endl;
        cin >> selection;
        
        switch (selection)
        {
            case 1:
                supplies1.printPartsOrder();
                break;
            case 2:
                cout << "Enter how many units to produce" << endl;
                cin >> numThing1;
                supplies1.produceThing1(numThing1);
                break;
            case 3:
                cout << "Enter how many units to produce" << endl;
                cin >> numThing2;
                supplies1.produceThing2(numThing2);
                break;
        }
        
    } while(selection != 4);
    
    return 0;
    
}