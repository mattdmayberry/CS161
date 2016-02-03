/***********************************************
 * Item.hpp
 * Created by Matthew D Mayberry on 2/22/15
 * CS161_400_W2015_Assignment7
 ***********************************************/

#include <string>
using namespace std;

#ifndef __ITEM
#define __ITEM

class Item
{
private:
    string name;
    double price;
    int quantity;
    int itemCounter;
    
public:
    Item();
    Item(string inputName, double inputPrice, int inputQty);
    void setName(string inputName);
    void setPrice(double inputPrice);
    void setQty(int inputQty);
    string getName();
    double getPrice();
    int getQty();

};

#endif