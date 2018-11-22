#include<iostream>
#include "BlackWitch.h"
BlackWitch::BlackWitch()
{
    SetName("New Witch");
    SetHealth(100);
    SetWeight(0.0f);
    SetWeapon(Weapon{ "New Weapon", 0,0.0f,0,100 });
    SetArmour(Armour{ "New Armour", 0,0.0f,0,0,Cardboard });
    SetFood(0);
    SetState(CharacterState{ Idle });
    SetMagicProficiency(0);
    SetDarkPower(0);
}

BlackWitch::BlackWitch(std::string characterName, float health, float weightLimit, Weapon weapon, Armour armour, int food, CharacterState state, int magicProficiency, int darkPower)
    :GameCharacter({ characterName,health,weightLimit,weapon, armour,food,state }), magicProficiency_{ magicProficiency }, darkPower_{ darkPower }
{

}

int BlackWitch::GetMagicProficiency()
{
    return magicProficiency_;
}

int BlackWitch::GetDarkPower()
{
    return darkPower_;
}

void BlackWitch::SetMagicProficiency(int magicProficiency)
{
    magicProficiency_ = magicProficiency;
}

void BlackWitch::SetDarkPower(int darkPower)
{
    darkPower_ = darkPower;
}

void BlackWitch::Bewitch(GameCharacter & character)
{
    std::cout << "Black witch " << GetName() << " is attempting to bewitch " << character.GetName() << std::endl;
}

void BlackWitch::Sleep()
{
    float currentHealth = GetHealth();
    if (GetHealth() < 100.0f) {
        SetHealth(currentHealth *= 1.15f);
    }
    std::cout << "Black witch is sleeping.";
}
