#pragma once

#include "Unit.h"
#include "IAttackable.h"
#include "IMovable.h"

class Warrior : public Unit, public IAttacable, public IMovable{
public:
    Warrior(string name);

    void attack(Unit& target) override;
    void move() override;
};