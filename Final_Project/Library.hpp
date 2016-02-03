/****************************************************************
 * Library.hpp
 * Created by Matthew D Mayberry on 3/11/15
 * CS161_400_W2015_Final_Project
 ****************************************************************/

#ifndef LIBRARY_HPP
#define LIBRARY_HPP

#include <string>
#include <vector>
using namespace std;

class Patron;  // forward declarations
class Book;

class Library
{
private:
    vector<Book> holdings; // a list of Books the library has
    vector<Patron> members; // a list of Patrons the library has
    int currentDate; // stores the current date represented as an integer number of "days" since the Library object was created
    
public:
    Library();
    void addBook();
    void addMember();
    void checkOutBook(string patronID, string bookID);
    void returnBook(string bookID);
    void requestBook(string patronID, string bookID);
    void incrementCurrentDate();
    void payFine(string patronID, double payment);
    void viewPatronInfo(string patronID);
    void viewBookInfo(string bookID);
    Book* checkBook(string bookID);
    Patron* checkPatron(string memberID);
};

#endif