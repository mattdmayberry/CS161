/***********************************************
 * ShopCart.cpp
 * Created by Matthew D Mayberry on 2/22/15
 * CS161_400_W2015_Assignment7
 ***********************************************/

#include "ShopCart.hpp"
#include "Item.hpp"
#include <iostream>
#include <string>
#include <vector>
using namespace std;




void ShoppingCart::addItem()
{
    Item itemN;
    string uName;
    double uPrice;
    int uQty;
    
    cout << "Enter the name of the item you wish to place in your cart: " << endl;
    cin >> uName;
    cout << "Enter the price for the item: " << endl;
    cin >> uPrice;
    cout << "Enter the quantity of " << uName << " that you want to add to your cart" << endl;
    cin >> uQty;
    itemN.setName(uName);
    itemN.setPrice(uPrice);
    itemN.setQty(uQty);
    
    cartV.push_back(itemN);
}

void ShoppingCart::listContents()
{
    for (int i = 0; i < cartV.size(); i++)
    {
        Item curItem = cartV[i];
        cout << curItem.getName() << " " << curItem.getPrice() << " " << curItem.getQty() << endl;
    }
}

double ShoppingCart::totalPrice()
{
    double sumPrice = 0;
    double sumQty = 0;
    double sum = 0;
    for (int i = 0; i < cartV.size(); i++)
    {
        sumPrice += cartV[i].getPrice();
        sumQty += cartV[i].getPrice();
        sum = sumPrice * sumQty;
    }
    cout << "The total price of all items in your cart is " << sum << " dollars." << endl;
    return 0;
}



// main method
int main()
{
    int selection = 0;
    ShoppingCart cart1;
    
    while (selection != 4)
    {
        cout << "Please select an option: " << endl;
        cout << "1. Add an item to the shopping cart." << endl;
        cout << "2. List contents of cart, including price and quantity." << endl;
        cout << "3. Print total price for all cart contents." << endl;
        cout << "4. Quit" << endl;
        cin >> selection;
      
        switch (selection)
        {
            case 1:
                cart1.addItem();
                break;
            case 2:
                cart1.listContents();
                break;
            case 3:
                cart1.totalPrice();
                break;
        }
    }

    
    return 0;
    
    
}