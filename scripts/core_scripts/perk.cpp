// TITLE BAR

#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <iomanip>

#include "perk.h"

perk::perk() {

    setName(TESTNAME);
    setID(TESTID);
    setType(TESTCOLUMN);

}

perk::perk(std::string name, long int id, enum type column) {

    setName(name);
    setID(id);
    setType(column);

}

perk::~perk() {

}

std::string perk::getName() {

    if(activeUser.getPrintState()) { std::cout << perk::perkName << std::endl; }
    return(perk::perkName);

}

long int perk::getID() {

    if(activeUser.getPrintState()) { std::cout << perk::perkID << std::endl; }
    return(perk::perkID);

}

enum type perk::getColumn() {

    if(activeUser.getPrintState()) { std::cout << perk::perkColumn << std::endl; }
    return(perk::perkColumn);

}

void perk::setName(std::string name) {

    perk::perkName = name;

}

void perk::setID(long int id) {

    perk::perkID = id;

}

void perk::setType(enum type column) {

    perk::perkColumn = column;

}

bool perk::operator<(perk &p) {

    return(getID() < p.getID());

}

bool perk::operator==(perk &p) {

    return(getID() == p.getID());

}

int main() {

    perk test_perk1;

    return(0);

}