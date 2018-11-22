/*
    Main.cpp
    Desciption: Main driver class for Week 9 Lab 1 Challenges
    Date: 20/11/2018
    Author: Jamie Neill
    Copyright: UUM
*/
#include<iostream>
#include"Item.h"
#include"Weapon.h"
#include"Armour.h"
#include"GameCharacter.h"
#include"BlackWitch.h"
int main() {
    Item sword{ "Geoff's Blade", 100, 1.5f };
    std::cout << sword.ToString() << ". Weight: " << sword.GetItemWeight() << std::endl;
    std::cout << "Setting values \n";
    sword.SetItemName("Bob's Blade");
    sword.SetItemValue(300);
    sword.SetItemWeight(2.0f);
    std::cout << sword.ToString() << ". Weight: " << sword.GetItemWeight() << std::endl;
    std::cout << "Getting Values \n";
    std::cout << "Name: " << sword.GetItemName() << std::endl;
    std::cout << "Value: " << sword.GetItemValue() << " Gold Coins" << std::endl;
    std::cout << "Weight: " << sword.GetItemWeight() << std::endl << std::endl;

    std::cout << "Testing Weapon \n\n";

    Weapon sword2{ "Geoff's Blade", 100, 1.5f, 10, 100 };
    std::cout << sword2.ToString() << ". Weight: " << sword2.GetItemWeight() << std::endl;
    std::cout << "Setting values \n";
    sword2.SetItemName("Bob's Blade");
    sword2.SetItemValue(300);
    sword2.SetItemWeight(2.0f);
    sword2.SetWeaponHealth(200);
    sword2.SetWeaponHitStrength(15);
    std::cout << sword2.ToString() << ". Weight: " << sword.GetItemWeight() << std::endl;
    std::cout << "Getting Values \n";
    std::cout << "Name: " << sword2.GetItemName() << std::endl;
    std::cout << "Value: " << sword2.GetItemValue() << " Gold Coins" << std::endl;
    std::cout << "Weight: " << sword2.GetItemWeight() << std::endl;
    std::cout << "Hit Strength: " << sword2.GetWeaponHitStrength() << std::endl;
    std::cout << "Health: " << sword2.GetWeaponHealth() << std::endl << std::endl;

    std::cout << "Testing Armour \n\n";

    Armour testArmour{ "Arthur's Breastplate", 700, 23,50,100, Iron };
    std::cout << testArmour.ToString() << ". Weight: " << testArmour.GetItemWeight() << std::endl;
    std::cout << "Setting values \n";
    testArmour.SetItemName("Ironworker James' Helmet");
    testArmour.SetItemValue(500);
    testArmour.SetItemWeight(9.2f);
    testArmour.SetArmourDefence(25);
    testArmour.SetArmourHealth(100);
    testArmour.SetArmourType(Steel);
    std::cout << testArmour.ToString() << ". Weight: " << testArmour.GetItemWeight() << std::endl;
    std::cout << "Getting Values \n";
    std::cout << "Name: " << testArmour.GetItemName() << std::endl;
    std::cout << "Value: " << testArmour.GetItemValue() << " Gold Coins" << std::endl;
    std::cout << "Weight: " << testArmour.GetItemWeight() << std::endl;
    std::cout << "Defence: " << testArmour.GetArmourDefence() << std::endl;
    std::cout << "Health: " << testArmour.GetArmourHealth() << std::endl;
    std::cout << "Armour Type: " << testArmour.GetArmourType() << std::endl;

    std::cout << "Testing Black Witch\n" << std::endl;
    BlackWitch witch{ "Gertrude",100.0f,20.0f, Weapon{},Armour{"Cape",0,0,0,0,Cardboard},12, Idle, 19, 6 };
    GameCharacter geoff{ "Geoff", 100.0f, 23.0f, Weapon{"Sword", 12, 2, 10, 100}, Armour{"Helmet", 20, 1.0f, 10, 20, Leather},29,Idle };
    witch.Bewitch(geoff);
    geoff.Attack(witch);
    return 0;
}