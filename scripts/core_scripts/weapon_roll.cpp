// TITLE BAR

#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <iomanip>

#include "weapon_roll.h"

// Constructors
weapon_roll::weapon_roll() {

}

weapon_roll::weapon_roll(bool holo) {

    setHoloState(holo);

}

weapon_roll::~weapon_roll() {

}

// Getters
std::string weapon_roll::getWeaponName() {

    if(activeUser.getPrintState()) { std::cout << weaponName << std::endl; }
    return(weapon_roll::weaponName);

}

std::string weapon_roll::getHoloName() {

    if(activeUser.getPrintState()) { std::cout << holoName << std::endl; }
    return(weapon_roll::holoName);

}

std::string weapon_roll::getRollName() {

    if(activeUser.getPrintState()) { std::cout << rollName << std::endl; }
    return(weapon_roll::rollName);

}

std::vector<std::vector<std::string>> weapon_roll::getPerkNames() {

}

std::vector<std::vector<long int>> weapon_roll::getPerkIDs() {

}

long int weapon_roll::getItemID() {

    if(activeUser.getPrintState()) { std::cout << itemID << std::endl; }
    return(weapon_roll::itemID);

}

bool weapon_roll::isHolo() {

    if(activeUser.getPrintState()) { std::cout << holoBool << std::endl; }
    return(weapon_roll::holoBool);

}

// Setters
void weapon_roll::setWeaponName(std::string name) {

    weapon_roll::weaponName = name;

}

void weapon_roll::setHoloName(std::string name) {

    weapon_roll::holoName = name;

}

void weapon_roll::setRollName(std::string name) {

    weapon_roll::rollName = name;

}

void weapon_roll::addPerk(std::string name) {

}

void weapon_roll::addPerk(long int id) {

}

void weapon_roll::setItemID(long int id) {

    weapon_roll::itemID = id;

}

void weapon_roll::toggleHoloState() {

    weapon_roll::holoBool = !holoBool;

}

void weapon_roll::setHoloState(bool state) {

    weapon_roll::holoBool = state;

}