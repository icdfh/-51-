#include "Warrior.h"
#include <iostream>
using namespace std;

Warrior::Warrior(string name) : Unit(name, 120,25){}

void Warrior::attack(Unit& target){
    cout << name << "attacks" << target.getName() << "with sword!" << endl;
    target.takeDamage(damage);
}

void Warrior::move(){
    cout << name << "moves sloly with heavy armor" <<endl;
}
