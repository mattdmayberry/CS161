/***********************************************
 * Supplies.h
 * Created by Matthew D Mayberry on 2/14/15
 * CS161_400_W2015_Assignment6
 ***********************************************/

#ifndef __SUPPLIES_H
#define __SUPPLIES_H

class Supplies
{
private:
    int things;  // thingamajigs
    int watchs; // watchamacallits
    int frams; // framistats
    
public:
    Supplies();
    Supplies(int numT, int numW, int numF);
    void setNumThingamajigs(int numT);
    void setNumWatchamacallits(int numW);
    void setNumFramistats(int numF);
    int printPartsOrder();
    int produceThing1(int numThing1);
    int produceThing2(int numThing2);
    
};


#endif
