/****************************************************************
 * Patron.cpp
 * Created by Matthew D Mayberry on 3/11/15
 * CS161_400_W2015_Final_Project
****************************************************************/

#include <iostream>
#include <vector>
#include "Patron.hpp"
#include "Library.hpp"

using namespace std;

Patron::Patron()
{
    idNum = "";
    name = "";
    fineAmount = 0;
}

Patron::Patron(string idn, string n)
{
    idNum = idn;
    name = n;
    fineAmount = 0;
}

/****************************************************************
 *                         getIDNum                              *
 ****************************************************************/

string Patron::getIdNum()
{
    return idNum;
}

/****************************************************************
 *                         getName                               *
 ****************************************************************/

string Patron::getName()
{
    return name;
}

/****************************************************************
 *                   getCheckedOutBooks                          *
 ****************************************************************/
// vector<Book*> checkedOutBooks; // a list of books that Patron currently has checked out

vector<Book*> Patron::getCheckedOutBooks()
{
    return checkedOutBooks;
}

/****************************************************************
 *                          addBook                              *
 ****************************************************************/
// vector<Book*> checkedOutBooks; // a list of books that Patron currently has checked out

void Patron::addBook(Book* b) // adds the specified book to checkedOutBooks
{
    checkedOutBooks.push_back(b);
}

/****************************************************************
 *                         removeBook                            *
 ****************************************************************/
// vector<Book*> checkedOutBooks; // a list of books that Patron currently has checked out

void Patron::removeBook(Book* b) // removes the specified book from checkedOutBooks
{
    for(int i = 0; i < checkedOutBooks.size(); i++)
    {
        if(checkedOutBooks[i]->getIdCode() == b->getIdCode())
        {
            checkedOutBooks.erase(checkedOutBooks.begin()+i);
            return;
        }
    }
}

/****************************************************************
 *                         getFineAmount                         *
 ****************************************************************/

double Patron::getFineAmount()
{
    return fineAmount;
}

/****************************************************************
 *                         amendFine                             *
 ****************************************************************/

void Patron::amendFine(double amount) // a positive argument increases the fine amount, a negative one decreases it
{
    fineAmount += amount;
}