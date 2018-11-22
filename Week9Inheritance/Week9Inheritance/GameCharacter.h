#pragma once
#include"Weapon.h"
#include"Armour.h"

enum CharacterState {Idle, Running, Sleeping, Walking, Defending, Dead, Attacking};

class GameCharacter
{
public:
    GameCharacter();
    GameCharacter(std::string characterName, float characterHealth, float weightLimit, Weapon weapon, Armour armour, int food, CharacterState state);
    virtual bool Attack(GameCharacter &character);
    void Defend();
    void Walk();
    void Run();
    virtual void Sleep();
    CharacterState GetState();
    void AddFood(int amount);
    void Eat();
    std::string GetName();
    float GetHealth();
    float GetWeight();
    int GetFood();
    void SetName(std::string name);
    void SetHealth(float health);
    void SetWeight(float weight);
    void SetFood(int food);
    void SetWeapon(Weapon weapon);
    void SetArmour(Armour armour);
    void SetState(CharacterState state);
private:
    std::string characterName_;
    float characterHealth_;
    float weightLimit_;
    Weapon weapon_;
    Armour armour_;
    int food_;
    CharacterState state_;
};

