/***********************************************
 * TicTacToe.cpp
 * Created by Matthew D Mayberry on 2/22/15
 * CS161_400_W2015_Assignment7
 ***********************************************/

#include "TicTacToe.hpp"
#include "Board.hpp"
#include <iostream>
using namespace std;



TicTacToe::TicTacToe()
{
    turn = 'X';
    board1 = Board();
}

void TicTacToe::setTurn(char turn1)
{
    
    if (turn1 == 'X' || turn1 == 'x')
    {
        turn = 'x';
    }
    else if (turn1 == 'O' || turn1 == 'o')
    {
       turn = 'o';
    }
}

char TicTacToe::getTurn()
{
    return turn;
}


int TicTacToe::play()
{
    int x, y;
    bool validMove = false;
    do
    {
        board1.print();
        do
        {
            cout << "Player " << turn << ", please enter your next row coordinate." << endl;
            cin >> x;
            cout << "Player " << turn << ", please enter your next column coordinate." << endl;
            cin >> y;
        }
        while((x < 0 && x > 2) && (y < 0 && y > 2));
        
        validMove = board1.makeMove(x,y,turn);
        if (validMove == false)
        {
            cout << "Player " << turn << ", your selected board location is occupied." << endl;
        }
        else
        {
            if(turn == 'X' || turn == 'x')
                setTurn('o');
            else if(turn == 'O' || turn == 'o')
                setTurn('x');
        }
    }
    while(board1.gameState() == 3);
    board1.print();
    
    return board1.gameState();
}


int main()
{
    //Play function return
    int result;
    
    // Ask user whether 'x' or 'o' should move first
    char firstmove;
    
    do
    {   cout << "Which player should begin? (X or O): " << endl;
        cin >> firstmove;
        //cout << "Please enter either X or O to begin play" << endl;
    }
    while (firstmove != 'x' && firstmove != 'X' && firstmove != 'o' && firstmove != 'O');
    
    TicTacToe game1;
    game1 = TicTacToe();
    
    //Send user input for first move
    game1.setTurn(firstmove);
    
    result = game1.play();
    
    switch (result)
    //X, O, DRAW, PROGRESS
    {
        case 0:
            cout << "X has won!" << endl;
            break;
        case 1:
            cout << "O has won!" << endl;
            break;
        case 2:
            cout << "The game ended in a draw." << endl;
            break;
    }
    
    
  
    
    return 0;
}