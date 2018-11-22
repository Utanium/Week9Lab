/*
    Armour.cpp
    Desciption: Definition file for Armour.h
    Date: 20/11/2018
    Author: Jamie Neill
    Copyright: UUM
*/

#include"Armour.h"
Armour::Armour()
    :Item({ "Armour", 0, 0.0f }), defence_{ 0 }, armourHealth_{ 0 }, armourType_{ Cardboard } {
}

Armour::Armour(std::string armourName, int value, float weight, int armourDefence, int armourHealth, ArmourType armourType)
    : Item({ armourName, value, weight }), defence_{ armourDefence }, armourHealth_{ armourHealth }, armourType_{ armourType } {

}
int Armour::GetArmourDefence() {
    return defence_;
}
int Armour::GetArmourHealth() {
    return armourHealth_;
}
ArmourType Armour::GetArmourType() {
    return armourType_;
}
void Armour::SetArmourDefence(int armourDefence) {
    defence_ = armourDefence;
}
void Armour::SetArmourHealth(int armourHealth) {
    armourHealth_ = armourHealth;
}
void Armour::SetArmourType(ArmourType armourType) {
    armourType_ = armourType;
}
std::string Armour::ToString() {
    std::string armourInfo{};
    armourInfo.append("Armour: " + GetItemName()
        + ", Worth: " + std::to_string(GetItemValue())
        + " gold coins, Defence: " + std::to_string(GetArmourDefence())
        + ", Armour Health: " + std::to_string(GetArmourHealth())
        + ", Armour Material: " + std::to_string(GetArmourType()));
    return armourInfo;
}