// TITLE BAR

#pragma once

#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <iomanip>

#include "perk.h"

class weapon_roll {

    // Components:
    std::string weaponName;
    std::string holoName;
    std::string rollName;

    std::vector<std::vector<std::string>> perkNames;
    std::vector<std::vector<long int>> perkIDs;

    long int itemID;

    bool holoBool;

    user_settings activeUser;

    // Operations: 
    public:
        weapon_roll();
        weapon_roll(bool holo);
        ~weapon_roll();

        std::string getWeaponName();
        std::string getHoloName();
        std::string getRollName();

        std::vector<std::vector<std::string>> getPerkNames();
        std::vector<std::vector<long int>> getPerkIDs();

        long int getItemID();

        bool isHolo();

        void setWeaponName(std::string name);
        void setHoloName(std::string name);
        void setRollName(std::string name);

        void addPerk(std::string name);
        void addPerk(long int id);

        void setItemID(long int id);

        void toggleHoloState();
        void setHoloState(bool state);

};