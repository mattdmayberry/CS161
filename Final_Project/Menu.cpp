/***********************************************
 * Menu.cpp
 * Created by Matthew D Mayberry on 3/11/15
 * CS161_400_W2015_Final_Project
 ***********************************************/

#include <iostream>
#include <vector>
#include <string>
#include "Book.hpp"
#include "Patron.hpp"
#include "Library.hpp"
using namespace std;

int main()
{
    
    int selection = 0;
    Library library1;
    string memberID = "";
    string bookID = "";
    double paymentAmount;
    
    
    do
    {
        cout << "***********************************************************" << endl;
        cout << "Select an option from the list below (1 - 10): " << endl;
        cout << "1) Add book" << endl;
        cout << "2) Add member" << endl;
        cout << "3) Check out book" << endl;
        cout << "4) Return book" << endl;
        cout << "5) Request book" << endl;
        cout << "6) Pay fine" << endl;
        cout << "7) Increment current date" << endl;
        cout << "8) View patron info" << endl;
        cout << "9) View book info" << endl;
        cout << "10) Quit" << endl;
        cout << "***********************************************************" << endl;
        cin >> selection;
    
        switch (selection)
        {
            case 1: // Add book
                library1.addBook();
                break;
                
            case 2: // Add member
                library1.addMember();
                break;
           
            case 3: // Check out book
                cout << "Enter the member ID for the patron interested in checking out a book: " << endl;
                cin >> memberID;
                cout << "Enter the book ID for the book the member would like to check out: " << endl;
                cin >> bookID;
                library1.checkOutBook(memberID, bookID);
                break;
                
            case 4: // Return book
                cout << "Enter the book ID for the book you would like to return: " << endl;
                cin >> bookID;
                library1.returnBook(bookID);
                break;
            
            case 5: // Request book
                cout << "Enter the member ID for the patron interested in requesting a book: " << endl;
                cin >> memberID;
                cout << "Enter the book ID for the book the member would like to request: " << endl;
                cin >> bookID;
                library1.requestBook(memberID, bookID);
                break;
            
            case 6: // Pay fine
                cout << "Enter the member ID for the patron interested in paying a library fine: " << endl;
                cin >> memberID;
                cout << "Enter the amount the member would like to pay: " << endl;
                cin >> paymentAmount;
                library1.payFine(memberID, paymentAmount);
                break;
            
            case 7: // Increment current date
                library1.incrementCurrentDate();
                break;
            
            case 8: // View patron info
                cout << "Enter the member ID of the patron for which you would like to view information: " << endl;
                cin >> memberID;
                library1.viewPatronInfo(memberID);
                break;
            
            case 9: // View book info
                cout << "Enter the book ID of the publication for which you would like to view information: " << endl;
                cin >> bookID;
                library1.viewBookInfo(bookID);
                break;
        }
    
        
    }while (selection != 10);
    
    return 0;

}


