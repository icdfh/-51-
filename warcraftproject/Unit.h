#pragma once

#include <string>

class Unit{
protected:
    string name;
    int hp;
    int damage;

public:
    Unit(string name, int hp, int damage);
    string getName() const;
    int getHp() const;
    int getDamage() const;

    void showInfo() const;
    void takeDamage(int damage);
    bool isAlive() const;

    virtual ~Unit() {}
};