/****************************************************************
 * Library.cpp
 * Created by Matthew D Mayberry on 3/11/15
 * CS161_400_W2015_Final_Project
****************************************************************/

#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include "Library.hpp"
#include "Book.hpp"
#include "Patron.hpp"

using namespace std;

/****************************************************************
 *                         checkBook                            *
 ****************************************************************/

Book* Library::checkBook(string bookID)
{
    for(unsigned int i = 0; i < holdings.size(); i++)
    {
        if(holdings[i].getIdCode() == bookID)
        {
            return &holdings[i];
        }
    }
    cout << "The book is not in the library !!" << endl;
    return NULL;
}

/****************************************************************
 *                        checkPatron                           *
 ****************************************************************/

Patron* Library::checkPatron(string memberID)
{
    for(unsigned int i = 0; i < members.size(); i++)
    {
        if(members[i].getIdNum() == memberID)
        {
            return &members[i];
        }
    }
    cout << "The member is not in the library !!" << endl;
    return NULL;
}

/****************************************************************
 *                        Library()                             *
 ****************************************************************/

Library::Library() // initalizes currentDate to zero
{
    currentDate = 0;
}

/****************************************************************
 *                           addBook                             *
 ****************************************************************/

void Library::addBook() // prompts user for book info (including ID) and uses it to create a Book object, which is added to holdings
{
    Book newBook;
    string title;
    string author;
    string idCode;
    cin.ignore();
    
    // Get book info from user
    cout << "Input title of the book: " << endl;
    getline(cin,title);
    cout << "Input author of book: " << endl;
    getline(cin,author);
    cout << "Input a unique numerical identifier for the book: " << endl;
    cin >> idCode;
    for(unsigned int i = 0; i < holdings.size(); i++)
    {
        if(holdings[i].getIdCode() == idCode)
        {
            cout << "Numerical identifier already exists in library!" << endl;
            cout << "Returning to menu!" << endl;
            return;
        }
    }
    
    // Assign book info to new Book object
    newBook = Book(idCode, title, author);
    
    // Send new Book object to holdings vector
    holdings.push_back(newBook);
}

/****************************************************************
 *                         addMember                             *
 ****************************************************************/

void Library::addMember() // prompts the user for patron info (including ID) and uses it to create a Patron object, which is added to members
{
    Patron newMember;
    string name;
    string idNum;
    cin.ignore();
    
    // Get member info from user
    cout << "Input the member's name: " << endl;
    getline(cin,name);
    cout << "Input a unique numerical identifier for the member: " << endl;
    cin >> idNum;
    for(unsigned int i = 0; i < members.size(); i++)
    {
        if(members[i].getIdNum() == idNum)
        {
            cout << "Numerical identifier already exists in library!" << endl;
            cout << "Returning to menu!" << endl;
            return;
        }
    }
    
    // Assign member info to new Patron object
    newMember = Patron(idNum, name);
    
    // Send new Patron object to members vector
    members.push_back(newMember);
}

/****************************************************************
 *                      checkOutBook                             *
 ****************************************************************/

void Library::checkOutBook(string patronID, string bookID)
{
    Patron* patronPtr = checkPatron(patronID);
    Book* bookPtr = checkBook(bookID);
    
    // Validate if member is in library
    if(patronPtr == NULL)
    {
        cout << "User input member ID not found in library !!" << endl;
        return;
    }
    
    // Validate if book is in library
    if(bookPtr == NULL)
    {
        cout << "User input book ID not found in library !!" << endl;
        return;
    }
    
    // Validate book is not checked out by another patron
    if(bookPtr->getLocation() == CHECKED_OUT)
    {
        cout << "The book is already checked out !!" << endl;
        return;
    }
    
    // Validate book is not on hold by another patron
    if(bookPtr->getLocation() == ON_HOLD_SHELF && bookPtr->getRequestedBy()->getIdNum() != patronID)
    {
        cout << "The book is on hold by another member !!" << endl;
        return;
    }
    
    // update the Book's checkedOutBy
    bookPtr->setCheckedOutBy(patronPtr);
    
    // update the Book's dateCheckedOut
    bookPtr->setDateCheckedOut(currentDate);
    
    // update the books location
    bookPtr->setLocation(CHECKED_OUT);
    
    // if the user had the book on hold, remove the hold
    if(bookPtr->getRequestedBy() != NULL && bookPtr->getRequestedBy()->getIdNum() == patronID)
    {
        bookPtr->setRequestedBy(NULL);
    }
    
    // update patron's list of checked out books
    patronPtr->addBook(bookPtr);
    cout << bookPtr->getTitle() << " has been checked out by " << patronPtr->getName() << endl;
}


/****************************************************************
 *                         returnBook                            *
 ****************************************************************/
// check if the book is not in the library.  If the book is not checked out, print that message and return to the menu.  Update the patron list; update the books location depending on whether another patron has requested it; update the books checkedOutBy; print out that Book title has been returned.


void Library::returnBook(string bookID)
{
    // Check if user input bookID are in library
    
    Book* bookPtr = checkBook(bookID);
    
    // Validate if book is in library
    if(bookPtr == NULL)
    {
        cout << "User input book ID not found in library !!" << endl;
        return;
    }
    
    // Validate if book is checked out
    if(bookPtr->getLocation() != CHECKED_OUT)
    {
        cout << "The book is not checked out !!" << endl;
        return;
    }
    
    // update patron's list of checked out books
    Patron* patron = bookPtr->getCheckedOutBy();
    patron->removeBook(bookPtr);
    
    // update the Book's checkedOutBy
    bookPtr->setCheckedOutBy(NULL);
    
    // update location
    if(bookPtr->getRequestedBy()!= NULL)
    {
        bookPtr->setLocation(ON_HOLD_SHELF);
    }
    
    if(bookPtr->getRequestedBy() == NULL)
    {
        bookPtr->setLocation(ON_SHELF);
    }
    
    // Print out that the book has been returned
    cout << bookPtr->getTitle() << " has been checked in" << endl;
}

/****************************************************************
 *                       requestBook                             *
 ****************************************************************/
// if the specified book or patron are not in the library, print out that message and return to the menu.  If the book is already requested by another patron, print out that msg and return to menu.  If the book is currently checked out by the patron returning it, print msg and return to menu.  Update the books requestedBy.  If the book is on the shelf, update its location to on hold; print that Book title is on request for the Patron name.


void Library::requestBook(string patronID, string bookID)
{
    Patron* patronPtr = checkPatron(patronID);
    Book* bookPtr = checkBook(bookID);
    
    // Validate if member is in library
    if(patronPtr == NULL)
    {
        cout << "User input member ID not found in library !!" << endl;
        return;
    }
    
    // Validate if book is in library
    if(bookPtr == NULL)
    {
        cout << "User input book ID not found in library !!" << endl;
        return;
    }
    
    // Validate if book is requested by another patron
    if(bookPtr->getLocation() == ON_HOLD_SHELF && bookPtr->getRequestedBy()->getIdNum() != patronID)
    {
        cout << "The book is has already been requested by another member !!" << endl;
        return;
    }
    
    
    // Validate patron does not already have the book checked out
    if(bookPtr->getCheckedOutBy()->getIdNum() == patronID)
    {
        cout << "This member already has " << bookPtr->getTitle() << " checked out !!" << endl;
        return;
    }
    
    // update the books location, if currently on shelf
    if(bookPtr->getLocation() == ON_SHELF)
    {
        bookPtr->setLocation(ON_HOLD_SHELF);
    }
    
    // print that Book title is on request for the Patron name
    cout << bookPtr->getTitle() << " has been requested by " << patronPtr->getName() << endl;

}



/****************************************************************
 *                   incrementCurrentDate                        *
 ****************************************************************/
// increment current date; increase each Patron's fines by 10 cents for each overdue book they have checked out (using amendFine)

void Library::incrementCurrentDate()
{
    // increment current date
    currentDate++;
    Patron patron;
    vector<Book*>books;
    
    for( int i = 0; i < members.size(); i++)
    {
        patron = members[i];
        books = patron.getCheckedOutBooks();
        
        //nested for loop
        for( int j = 0; j < books.size(); j++)
        {
            //if((currentDate - bookPtr->getDateCheckedOut()) > Book::CHECK_OUT_LENGTH)
            if((currentDate - books[j]->getDateCheckedOut()) > Book::CHECK_OUT_LENGTH)
            {
                members[i].amendFine(0.1);
            }
        }
    }
}

/****************************************************************
 *                          payFine                              *
 ****************************************************************/
//  if the specified Patron is not in the library, print out that msg and return to the menu.  Use amendFine to update the patron's fine; print out that the fines for Patron name are now Patron fineAmount.

void Library::payFine(string patronID, double payment)
{
    Patron* patronPtr = checkPatron(patronID);
    
    // Validate if member is in library
    if(patronPtr == NULL)
    {
        cout << "User input member ID not found in library !!" << endl;
        return;
    }
    
    // reduce patron's fineAmount
    patronPtr->amendFine(payment*-1);
    
    // print out that the patron's fine has been reduced
    cout << patronPtr->getName() << "'s fines have been reduced by $" << payment << endl;
    cout << patronPtr->getName() << " now owes $" << patronPtr->getFineAmount() << " in fines" << endl;
}

/****************************************************************
 *                     viewPatronInfo                            *
 ****************************************************************/
// if specified patron is not in the Library, print out msg and return to the menu.  Print the Patron's ID, name, the titles of any checked out books and their current fines.

void Library::viewPatronInfo(string patronID)
{
    Patron* patronPtr = checkPatron(patronID);
    int bookCount = 1;
    
    // Validate if member is in library
    if(patronPtr == NULL)
    {
        cout << "User input member ID not found in library !!" << endl;
        return;
    }
    
    // create a vector of Book pointers to 'receive' the patrons checkedOutBooks
    vector<Book*>patBooks;
    patBooks = patronPtr->getCheckedOutBooks();
    
    // print out patron information
    cout << "----------------------------------------------------------" << endl;
    cout << "Member ID Number: " << patronPtr->getIdNum() << endl;
    cout << "Name: " << patronPtr->getName() << endl;
    cout << "Current Fines: " << patronPtr->getFineAmount() << endl;
    cout << "Checked Out Books: " << endl;
    for (int i=0; i < patBooks.size(); i++)
    {
        cout << bookCount << ". " << patBooks[i]->getTitle() << "  " << endl;
        bookCount++;
    }
    cout << "----------------------------------------------------------" << endl;
}


/****************************************************************
 *                      viewBookInfo                            *
 ****************************************************************/
// If the specified book is not in the Library, print out that message and return to the menu.  Print the book's ID, title, author and location; the name of the Patron whom it's requested by (if any); the name of the Patron whom it's checked out by (if any), and the number of days until it is due (or the word "overdue")
void Library::viewBookInfo(string bookID)
{
    Book* bookPtr = checkBook(bookID);
    
    // Validate if book is in library
    if(bookPtr == NULL)
    {
        cout << "User input book ID not found in library !!" << endl;
        return;
    }
    
    // print out the ID code, title and author
    for (int i=0; i < holdings.size(); i++)
    {
        cout << "----------------------------------------------------------" << endl;
        cout << "Book ID Code: " << bookPtr->getIdCode() << endl;
        cout << "Title: " << bookPtr->getTitle() << endl;
        cout << "Author: " << bookPtr->getAuthor() << endl;
        cout << "Location: ";
        if(bookPtr->getLocation() == ON_SHELF)
        {
            cout << "the book is on the shelf" << endl;
        }
        
        if(bookPtr->getLocation() == ON_HOLD_SHELF)
        {
            cout << "the book is on hold" << endl;
        }
        
        if(bookPtr->getLocation() == CHECKED_OUT)
        {
            cout << "the book is checked out" << endl;
        }
        
        // if checked out, print by whom
        if(bookPtr->getCheckedOutBy() != NULL)
        {
            cout << "Checked Out By: " << bookPtr->getCheckedOutBy()->getName() << endl;
            if((currentDate - bookPtr->getDateCheckedOut()) <= Book::CHECK_OUT_LENGTH)
            {
                cout << "Days till Due: " << (Book::CHECK_OUT_LENGTH - (currentDate - bookPtr->getDateCheckedOut())) << endl;
            }
            
            if((currentDate - bookPtr->getDateCheckedOut()) > Book::CHECK_OUT_LENGTH)
            {
                cout << "Book is OVERDUE!!" << endl;
            }
        }
        
        // if requested, print by whom
        if(bookPtr->getRequestedBy() != NULL)
        {
            cout << "Requested By: " << bookPtr->getRequestedBy() << endl;
        }
    cout << "----------------------------------------------------------" << endl;
    }
}