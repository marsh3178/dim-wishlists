// TITLE BAR

#pragma once

#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>

#include "user_settings.h"

enum type {
    BARREL,
    MAGAZINE,
    TRAIT
};

class perk {

    std::string perkName, TESTNAME = "jeffery";
    long int perkID, TESTID = 1234567890;
    enum type perkColumn, TESTCOLUMN = TRAIT;

    user_settings activeUser;

    public:
        perk();
        perk(std::string name, long int id, enum type column);
        ~perk();

        std::string getName();
        long int getID();
        enum type getColumn();

        void setName(std::string name);
        void setID(long int id);
        void setType(enum type column);

        bool operator<(perk &p);
        bool operator==(perk &p);

};