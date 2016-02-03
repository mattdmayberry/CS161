/***********************************************
 * Board.hpp
 * Created by Matthew D Mayberry on 2/22/15
 * CS161_400_W2015_Assignment7
 ***********************************************/

#ifndef __BOARD
#define __BOARD

class Board
{
private:
    char cells[3][3];
    enum state {X, O, DRAW, PROGRESS};
    char playerTurn;
public:
    Board();
    bool makeMove(int x, int y, char turn);
    void print();
    int gameState();
};

#endif

