#pragma once
#include"GameCharacter.h"
class BlackWitch : public GameCharacter
{
public:
    BlackWitch();
    BlackWitch(std::string characterName, float health, float weightLimit, Weapon weapon, Armour armour, int food, CharacterState state, int magicProficiency, int darkPower);
    int GetMagicProficiency();
    int GetDarkPower();
    void SetMagicProficiency(int magicProficiency);
    void SetDarkPower(int darkPower);
    void Bewitch(GameCharacter &character);
    void Sleep();
private:
    int magicProficiency_;
    int darkPower_;
};

