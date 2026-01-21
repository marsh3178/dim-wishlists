// TITLE BAR

#include "json.hpp"
using json = nlohmann::json;
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

#include "user_settings.h"

user_settings::user_settings() {

    std::cout << "Enter Username: ";
    std::cin >> username;
    std::fstream fJson(filepath);

    std::stringstream buffer;
    buffer << fJson.rdbuf();
    json file = json::parse(buffer.str());

    fJson.close();

    bool existingUser = false;
    userNum = 0;
    
    for(auto user : file["users"]) {
        if(username == file["users"][userNum]["user"].get<std::string>()) {
            for(auto setting : file["users"][userNum]["userSettings"]){
                printBool = file["users"][userNum]["userSettings"]["printState"].get<bool>();
            }
            existingUser = true;
            break;
        }
        userNum++;
    }

    if(!existingUser) {

        file["users"][userNum]["user"] = username;
        file["users"][userNum]["userSettings"]["printState"] = false;

        std::remove(filepath.c_str());
        std::ofstream patchedJson(filepath.c_str());
        patchedJson << std::setw(4) << file << std::endl;
        patchedJson.close();

    }
}

user_settings::~user_settings() {

}

bool user_settings::getPrintState() {

    return(printBool);

}

void user_settings::togglePrintState() {

    std::fstream fJson(filepath);

    std::stringstream buffer;
    buffer << fJson.rdbuf();
    json file = json::parse(buffer.str());

    fJson.close();

    file["users"][userNum]["userSettings"]["printState"] = !printBool;
    printBool = !printBool;

}