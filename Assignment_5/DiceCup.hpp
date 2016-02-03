/***********************************************
 * DiceCup.h
 * Created by Matthew D Mayberry on 2/7/15
 * CS161_400_W2015_Assignment5
 ***********************************************/


#ifndef DICECUP_H
#define DICECUP_H

class DiceCup
{
    
private:
    int numDice;
    int numFaces;
    int dcD;
    int dcF;
    
public:
    DiceCup();
    void setNumDice (int nD);
    void setNumFaces (int nF);
    int rollDice ();
};

#endif 
