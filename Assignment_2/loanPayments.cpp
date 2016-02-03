/************************************************
 ** Author:  Matt Mayberry
 ** Date: 1/17/15
 ** Description: CS161_Assignment2_loanPayments
*************************************************/

// This program calculates the monthly payment on a loan

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{   
  double  interestRate,
          decimalRate,
          loanAmount,
          monthlyPayment,
          totalPaid,
          interestPaid,
          paymentQty,
          ratePlus1;
 
   // Ask user to provide inputs
   cout << "Input monthly interest rate (example: 4.25%):   ";
   cin >> interestRate;
   cout << "Input quantity of loan payments:   ";
   cin >> paymentQty;
   cout << "Input the loan amount: $  ";
   cin >> loanAmount;

   // Convert interest rate to decimal form
   decimalRate = (interestRate/100); 
   ratePlus1 = decimalRate + 1;

   // Calculate monthly payment
   monthlyPayment = (decimalRate * pow(ratePlus1,paymentQty)/
   (pow(ratePlus1,paymentQty) - 1)) * loanAmount;

   // Calculate total paid
   totalPaid = monthlyPayment * paymentQty;

   // Calculate interest paid
   interestPaid = totalPaid - loanAmount;


   // Display variable names and values in table form 
   cout << "  " << endl;
   cout << "---------------------------------------------------" << endl;
   cout << "  " << endl; 
   cout << fixed << setprecision(2) << left << setw(30) << "Loan Amount:"
        << right << setw(3) << "$" << right << setw(11) << loanAmount << endl;
   cout << fixed << setprecision(2) << left << setw(30) << "Monthly Interest Rate:" 
        << right << setw(13) << interestRate << "%" << endl; 
   cout << left << setw(30) << "Number of Payments:" 
        << fixed << setprecision(0) << right << setw(14) << paymentQty << endl;
   cout << fixed << setprecision(2) << left << setw(30) << "Monthly Payment:" 
        << right << setw(3) << "$" << right << setw(11) << monthlyPayment << endl;
   cout << fixed << setprecision(2) << left << setw(30) << "Amount Paid Back:" 
        << right << setw(3) << "$" << right << setw(11) << totalPaid << endl; 
   cout << fixed << setprecision(2) << left << setw(30) << "Interest Paid:" 
        << right << setw(3) << "$" << right << setw(11) << interestPaid << endl;
   cout << "  " << endl;
   cout << "---------------------------------------------------" << endl;
   cout << "  " << endl;

   return 0; 

}

