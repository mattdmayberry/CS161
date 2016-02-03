/***********************************************
 * Board.cpp
 * Created by Matthew D Mayberry on 2/22/15
 * CS161_400_W2015_Assignment7
 ***********************************************/

#include "Board.hpp"
#include <iostream>
using namespace std;

Board::Board()
{
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            cells[i][j] = '.';
}

bool Board::makeMove(int x, int y, char turn)
{
    if(cells[x][y] != '.')
    {
        return false;
    }
    else
    {
        cells[x][y] = turn;
    }
    return true;
}

void Board::print()
{
    cout << "   0  1  2" << endl;
    for(int i = 0; i < 3; i++)
    {
        cout << i << "  ";
        for(int j = 0; j < 3; j++)
        {
            cout << cells[i][j] << "  ";
        }
        cout << endl;
    }
}

int Board::gameState()
{
    //check row winner
    for(int i = 0; i < 3; i++)
    {
        if(cells[i][0] == 'x' && cells[i][1] == 'x' && cells[i][2] == 'x')
        {
            return X;
        }
        else if(cells[i][0] == 'o' && cells[i][1] == 'o' && cells[i][2] == 'o')
        {
            return O;
        }
    }
    
    //check column winner
    for(int i = 0; i < 3; i++)
    {
        if(cells[0][i] == 'x' && cells[1][i] == 'x' && cells[2][i] == 'x')
            return X;
        else if(cells[0][i] == 'o' && cells[1][i] == 'o' && cells[2][i] == 'o')
            return O;
    }
    
    //check diagonal winner
    if(cells[0][0] == 'x' && cells[1][1] == 'x' && cells[2][2] == 'x')
    {
        return X;
    }
    else if(cells[0][0] == 'o' && cells[1][1] == 'o' && cells[2][2] == 'o')
    {
        return O;
    }
    else if(cells[0][2] == 'x' && cells[1][1] == 'x' && cells[2][0] == 'x')
    {
        return X;
    }
    else if(cells[0][2] == 'o' && cells[1][1] == 'o' && cells[2][0] == 'o')
    {
        return O;
    }
    
    //check if draw
    int drawCount = 0;
    
    for(int i = 0; i < 3; i++)
    {
        for(int j =0; j < 3; j++)
        {
            if(cells[i][j] != '.')
                drawCount++;
        }
    }
    
    if(drawCount == 9)
        return DRAW;
  
    return PROGRESS;
}