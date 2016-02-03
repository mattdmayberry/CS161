/************************************************
 * Author: Matt Mayberry
 * Date: 1/24/15
 * Description: CS161_400_Assignment3_fileAdder
************************************************/

// This file reads numbers from a file, adds 
// them together, and then writes the sum
// in a new file

#include <cstdlib>  // function exit() is in cstdlib
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{

   ifstream fin; 
   double value, num;
   float sum;
    
   // Open the input file
   fin.open("nums.txt");
   
   // Check that the file opened correctly
   if (fin.is_open())
   {   cout << "\n------------------------------------\n";
       cout << "\n!! File opened successfully!!\n";
   }
   else 
   {   cout << "!! Unable to open file !!\n";
       fin.close();
   }  

   //  Set acumulator to zero
   sum = 0.0; 
   cout << "\n------------------------------------\n";
   cout << "\n* Reading data from input file.\n";
   
   // read values from file
   while (!fin.eof())
   {      
      fin >> setprecision(2);
      fin >> value; 
      
      if(fin)
      {  num = value; 
         sum += num;
      }
   } 

   // Create and Open output file
   ofstream fout;
   fout.open("sum.txt");
   
   cout << "\n* Now writing data to the input file.\n";
   
   // Write sum to output file 
   fout << fixed << showpoint << setprecision(2); 
   fout << "* The sum of the values is " << sum << endl;

   // Close the file
   fout.close(); 

   // Prompt user of file writing completion
   cout << fixed << showpoint << setprecision(2);
   cout << "\n* The sum of the values is " << sum << endl;
   cout << "\n* Data written to sum.text\n";
   cout << "\n------------------------------------\n";

   return 0;
}


