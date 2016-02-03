/***********************************************
 * caesar.cpp
 * Created by Matthew D Mayberry on 2/20/15
 * CS161_400_W2015_Assignment7
 ***********************************************/

#include <iostream>
#include <cstdlib>
#include <string>
#include <stdlib.h>     /* atoi */

using namespace std;

void encipher(string sInput, int offset);

int main()
{
    string sInput;
    int offset;
    
    // Get string from user
    cout << "--------------------------------------------" << endl;
    cout << "Enter the string you would like to convert (input must be < 100 charactors): " << endl;
    getline(cin, sInput);
    cout << "Enter your preferred offset for the Caesar cipher: " << endl;
    cin >> offset;
    encipher(sInput, offset);
    
    return 0;
}

/***********************************************
 *               encipher                      *
 * This function takes a string and an offset  *
 * as parameters and prints out the enciphered *
 * form of the message                         *
 ***********************************************/

void encipher(string sInput, int offset)
{
    char cipher[100];
    for (int a = 0; a <= sInput.length(); a++)
    {
        int letter = (int)sInput[a] + offset;
        cipher[a] = (char) letter;
    }
    
    cout << " Your converted string is " << cipher << endl;
    cout << "--------------------------------------------" << endl;
};

