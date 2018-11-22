/*
    Armour.h
    Desciption: Declaration file for Armour.cpp
    Date: 20/11/2018
    Author: Jamie Neill
    Copyright: UUM
*/
#pragma once
#include"Item.h"
enum ArmourType { Cardboard, Leather, Wood, Iron, Steel };

class Armour : public Item {
public:
    Armour();
    Armour(std::string armourName, int value, float weight, int armourDefence, int armourHealth, ArmourType armourType);
    int GetArmourDefence();
    int GetArmourHealth();
    ArmourType GetArmourType();
    void SetArmourDefence(int armourDefence);
    void SetArmourHealth(int armourHealth);
    void SetArmourType(ArmourType armourType);
    std::string ToString();
private:
    int defence_;
    int armourHealth_;
    ArmourType armourType_;
};