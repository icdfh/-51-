#pragma once
#include  "IAttackable.h"

class Warrior : public IAttackable{
public:
    void attack() override;
};