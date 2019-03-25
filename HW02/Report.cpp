//
// Created by vikac on 24.09.2018.
//

#include "Report.h"

#include <iostream>
#include <cstring>


    int  adno;
    char name[20];
    float marks[5];

    float getAvg() {
        return (marks[0] + marks[1] + marks[2] + marks[3] + marks[4]) / 5;
    }

    float average;

    void Report::readInfo(int adno, const char* name; float marks[]) {
        std::cin >> adno;
        if (str  != 4) {
            std::cout << "Invalid admin. number";
        }
        std::cin >> name;
        for (int i = 0; i < 5; i++) {
            std::cin >> marks[i];
        }
        average = getAvg();
    }

    void Report::displayInfo() {
        std::cout << "admin. number: " << adno << '\n';
        std::cout << "name: " << name << '\n';
        std::cout << "marks: ";
        for (int i = 0; i < 5; i++) {
            std::cout << marks[i] << ' ';
        }
        std::cout << '\n';
        std::cout << "average: " << average <<  '\n';
    }


