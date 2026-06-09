#pragma once

class Unit;

class IAttacable{
public:
    virtual void attack(Unit& target) = 0;
    virtual ~IAttacable(){}
};