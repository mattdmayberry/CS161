/*********************************************
 * Author: Matt Mayberry
 * CS161 Assignment 9
 * convert.cpp
*********************************************/

#include <iostream>
#include <string> 
#include <cmath>
using namespace std;

// binary to decimal
void binaryToDecimal(string bin2dec, int i, int* decimal)
{
	if(i < bin2dec.size())
	{
		*decimal += (pow((float)2, (float)(bin2dec.size()-1-i))) * (bin2dec[i] - '0');
		i++;
		binaryToDecimal(bin2dec, i, decimal);
	}
}

//decimal to binary
void decimalToBinary(int dec2bin, string* binary)
{
	if(dec2bin != 0)
	{
		decimalToBinary(dec2bin / 2, binary);
		binary ->push_back((dec2bin % 2) + '0');
	}
}

//string validation
bool stringValidation(string binInput)
{
	for(int i = 0; i < binInput.size(); i++)
	{
		if(binInput[i] != '1' && binInput[i] != '0')
		{
			cout << "This is not a valid binary number!" << endl;
			return 1;
		}
	}
	return 0;
}

// main
int main()
{
	int selection = 0;
	int decimal = 0;
	string binInput;
	string binary;

	do
	{
		// prompt the user with menu
		cout << "Please select one of the following options: " << endl;
		cout << "1) Convert binary number to a decimal number." << endl;
		cout << "2) Convert decimal number to a binary number." << endl;
		cout << "3) Quit" << endl;
		cin >> selection;

		switch(selection)
		{
			//binary to decimal
			case 1:
				do
				{
					cout << "Enter a valid binary number: " << endl;
					cin >> binInput;
				} while(stringValidation(binInput) == 1);
				decimal = 0;
				binaryToDecimal(binInput, 0, &decimal);
				cout << binInput << " converted to decimal is " << decimal << endl;
				break;
			
			//decimal to binary
			case 2:
				cout << "Enter a decimal number to convert: " << endl;
				cin >> decimal;
				binary = ""; 
				decimalToBinary(decimal, &binary);
				cout << decimal << " converted to a binary number is " << binary << endl;
				break;
		}
	} while(selection != 3);
	return 0;
}
	
	
