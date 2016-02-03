/****************************************************************
 * Book.cpp
 * Created by Matthew D Mayberry on 3/11/15
 * CS161_400_W2015_Final_Project
****************************************************************/

#include <iostream>
#include <vector>
#include "Book.hpp"
#include "Patron.hpp"
#include "Library.hpp"
using namespace std;

Book::Book()
{
    idCode = "";
    title = "";
    author = "";
    checkedOutBy = NULL;
    requestedBy = NULL;
    location = ON_SHELF;
}

Book::Book(string idc, string t, string a)
{
    idCode = idc;
    title = t;
    author = a;
    checkedOutBy = NULL;
    requestedBy = NULL;
    location = ON_SHELF;
}

/****************************************************************
 *                        getIdCode                              *
 ****************************************************************/

string Book::getIdCode()
{
    return idCode;
}

/****************************************************************
 *                        getTitle                               *
 ****************************************************************/

string Book::getTitle()
{
    return title;
}

/****************************************************************
 *                        getAuthor                              *
 ****************************************************************/

string Book::getAuthor()
{
    return author;
}

/****************************************************************
 *                        setLocation                            *
 ****************************************************************/

void Book::setLocation(Locale lo)
{
    location = lo;
}

/****************************************************************
 *                        getLocation                            *
 ****************************************************************/

Locale Book::getLocation() // find book location
{
    return location;
}

/****************************************************************
 *                      setCheckedoutBy                          *
 ****************************************************************/

void Book::setCheckedOutBy(Patron* p)
{
    checkedOutBy = p;
}

/****************************************************************
 *                      getCheckedoutBy                          *
 ****************************************************************/

Patron* Book::getCheckedOutBy()
{
    return checkedOutBy;
}

/****************************************************************
 *                       setRequestedBy                          *
 ****************************************************************/

void Book::setRequestedBy(Patron* p)
{
    requestedBy = p;
}

/****************************************************************
 *                       getRequestedBy                          *
 ****************************************************************/

Patron* Book::getRequestedBy()
{
    return requestedBy;
}

/****************************************************************
 *                     setDateCheckedOut                         *
 ****************************************************************/

void Book::setDateCheckedOut(int d)
{
    dateCheckedOut = d;
}

/****************************************************************
 *                     getDateCheckedOut                         *
 ****************************************************************/

int Book::getDateCheckedOut()
{
    return dateCheckedOut;
}

