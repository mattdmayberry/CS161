/***********************************************
 * ShopCart.hpp
 * Created by Matthew D Mayberry on 2/22/15
 * CS161_400_W2015_Assignment7
 ***********************************************/

#include "Item.hpp"
#include <vector>
#include <string>
using namespace std;

#ifndef __SHOPCART
#define __SHOPCART

class ShoppingCart
{
private:
    vector<Item>cartV;

public:
    void addItem();
    void listContents();
    double totalPrice();
};

#endif