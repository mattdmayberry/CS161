/***********************************************
 * TicTacToe.hpp
 * Created by Matthew D Mayberry on 2/22/15
 * CS161_400_W2015_Assignment7
 ***********************************************/

#include "Board.hpp"

#ifndef __TICTACTOE_H
#define __TICTACTOE_H

class TicTacToe
{
private:
    Board board1;
    char turn;
    
    
public:
    TicTacToe();
    void setTurn(char turn);
    char getTurn();
    int play();
    int gameState(int state);
    
};

#endif