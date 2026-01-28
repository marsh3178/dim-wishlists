// TITLE BAR

#pragma once

#include <string>
#include <iostream>
#include <fstream>

class user_settings {

    std::string username, filepath = "user_settings.json";
    int userNum;
    bool printBool, DEFAULTPRINTSTATE = false;

    public:
        user_settings();
        user_settings(std::string username);
        ~user_settings();

        std::string getUsername();
        bool getPrintState();
        void togglePrintState();

};