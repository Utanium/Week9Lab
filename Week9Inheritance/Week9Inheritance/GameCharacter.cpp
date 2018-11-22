#include<iostream>
#include "GameCharacter.h"


GameCharacter::GameCharacter() {
    characterName_ = "New Character";
    characterHealth_ = 100;
    CharacterState{ Idle };
    weightLimit_ = 0;
    weapon_ = Weapon{ "New Weapon",0,0,0,0 };
    armour_ = Armour{ "New Armour",0,0,0,0,Cardboard };
    food_ = 0;
    std::cout << "A base GameCharacter called " << characterName_ << " has been born.\n";
}
GameCharacter::GameCharacter(std::string characterName, float characterHealth,
    float weightLimit, Weapon weapon, Armour armour, int food, CharacterState state)
    : characterName_{ characterName }, characterHealth_{ characterHealth }, 
    weightLimit_{ weightLimit }, weapon_{ weapon }, armour_{ armour }, food_{ food }, 
    state_{ state } {
    std::cout << "A base GameCharacter called " << characterName_ << " has been born.\n";
}

bool GameCharacter::Attack(GameCharacter & character)
{
    std::cout <<"Base character "<< characterName_ << " is attacking " << character.GetName() << " with a " << weapon_.GetItemName() << std::endl;
    state_ = Attacking;
    character.Defend();
    return false;
}

void GameCharacter::Defend()
{
    std::cout << "Base character " << characterName_ << " is defending themselves with a " << armour_.GetItemName() << " made from " << armour_.GetArmourType();
    state_ = Defending;
}

void GameCharacter::Walk()
{
    state_ = Walking;
    std::cout << characterName_ << " is " << state_ << std::endl;
}

void GameCharacter::Run()
{
    state_ = Running;
    std::cout << characterName_ << " is " << state_ << std::endl;
}

void GameCharacter::Sleep()
{
    state_ = Sleeping;
    std::cout << characterName_ << " is " << state_ << std::endl;
}

void GameCharacter::AddFood(int amount)
{
    food_ += amount;
}

void GameCharacter::Eat()
{
    for (int i = 0; i < 4; ++i) {
        if (food_ > 0) {
            AddFood(-1);
            characterHealth_ += 0.25;
        }
        else if (i == 3 && food_ > 0) {
            std::cout << "No food remaining!";
        }
    }
}

std::string GameCharacter::GetName()
{
    return characterName_;
}

float GameCharacter::GetHealth()
{
    return characterHealth_;
}

float GameCharacter::GetWeight()
{
    return weightLimit_;
}

int GameCharacter::GetFood()
{
    return food_;
}

void GameCharacter::SetName(std::string name)
{
    characterName_ = name;
}

void GameCharacter::SetHealth(float health)
{
    characterHealth_ = health;
}

void GameCharacter::SetWeight(float weight)
{
    weightLimit_ = weight;
}

void GameCharacter::SetFood(int food)
{
    food_ = food;
}

void GameCharacter::SetWeapon(Weapon weapon)
{
    weapon_ = weapon;
}

void GameCharacter::SetArmour(Armour armour)
{
    armour_ = armour;
}

void GameCharacter::SetState(CharacterState state)
{
    state_ = state;
}
