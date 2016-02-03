/***********************************************
 * Hero.cpp
 * Created by Matthew D Mayberry on 2/7/15
 * CS161_400_W2015_Assignment5
 ***********************************************/

#include "Hero.hpp"
#include <iostream>
#include <stdio.h>
#include <string>


using namespace std;

Hero::Hero(void){
    strength = 1;
    hitPoints = 1;
    speed = 1;
    money = 1;
    damage =1;
}

void Hero::setStrength(int str){
    strength = str;
}

void Hero::setHitPoints(int hp){
    hitPoints = hp;
}

void Hero::setSpeed(int spd){
    speed = spd;
}

void Hero::setMoney(int mon){
    money = mon;
}

int Hero::getStrength(int str){
    return strength;
}

int Hero::getHitPoints(int hp){
    return hitPoints;
}

int Hero::getSpeed(int spd){
    return speed;
}

int Hero::getMoney(int mon){
   return money;
}

int Hero::takeDamage(int hp, int dmg){
    return hp - dmg;
}


int main()
{
    
    // Create new hero object
    Hero hero1;
    int str, hp, spd, mon, dmg = 0;
    string name;
    cout << "Enter your hero's name: " << endl;
    cin >> name;
    cout << "Enter " << name << "'s Strength: " << endl;
    cin >> str;
    cout << "Enter " << name << "'s Hit Points: " << endl;
    cin >> hp;
    cout << "Enter " << name << "'s Speed: " << endl;
    cin >> spd;
    cout << "Enter " << name << "'s Coin count: " << endl;
    cin >> mon;
    
    cout << name << " has encountered an enemy!" << endl;
    cout << "How much damage has " << name << " sustained?" << endl;
    cin >> dmg;
    
    while (hp > dmg)
    {
        hero1.takeDamage(hp, dmg);
        hp = hero1.takeDamage(hp, dmg);
        cout << "--------------------------------------------" << endl;
        cout << name << "'s " << "Strenght: " << str << endl;
        cout << name << "'s " << "Hit Points: " << hp << endl;
        cout << name << "'s " << "Speed: " << spd << endl;
        cout << name << "'s " << "Coins: " << mon << endl;
        cout << "--------------------------------------------" << endl;
        cout << name << " survived the hit" << endl;
        cout << name << " was hit again" << endl;
        cout << "How much damage has " << name << " sustained?" << endl;
        cin >> dmg;
    }
    
    cout << "The enemy has slain " << name << endl;
    
    return 0;
    
}