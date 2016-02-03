/***********************************************
 * Hero.h
 * Created by Matthew D Mayberry on 2/7/15
 * CS161_400_W2015_Assignment5
 ***********************************************/

#ifndef HERO_H
#define HERO_H

class Hero
{
    
private:
    int strength;
    int hitPoints;
    int speed;
    int money;
    int damage;
    
public:
    Hero();
    void setStrength (int strength);
    void setHitPoints (int hitPoints);
    void setSpeed (int speed);
    void setMoney (int money);
    
    int getStrength(int str);
    int getHitPoints(int hp);
    int getSpeed(int spd);
    int getMoney(int mon);
    int takeDamage(int hp, int dmg);
    
};
    
#endif
