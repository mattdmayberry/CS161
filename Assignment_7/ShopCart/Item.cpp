/***********************************************
 * Item.cpp
 * Created by Matthew D Mayberry on 2/22/15
 * CS161_400_W2015_Assignment7
 ***********************************************/

#include "Item.hpp"
#include <iostream>
#include <string>

using namespace std;

Item::Item()
{
    Item::setName("");
    Item::setPrice(0.0);
    Item::setQty(0);
    itemCounter = 0;
}

void Item::setName(string inputName)
{
    name = inputName;
}

void Item::setPrice(double inputPrice)
{
    price = inputPrice;
}

void Item::setQty(int inputQty)
{
    quantity = inputQty;
}

string Item::getName()
{
    return name;
}

double Item::getPrice()
{
    return price;
}

int Item::getQty()
{
    return quantity;
}