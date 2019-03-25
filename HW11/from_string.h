//
// Created by vikac on 24.12.2018.
//

#ifndef HW11_FROM_STRING_H
#define HW11_FROM_STRING_H

#include <sstream>
#include <string>
#include <iostream>
#include <typeinfo>
#include <stdexcept>

struct bad_from_string : public std::runtime_error {
    using std::runtime_error::runtime_error;
};

template<typename T>
T from_string(const std::string &s) {
    T result;
    std::istringstream iss(s);
    iss >> std::noskipws >> result;

    iss.peek();
    if (!iss.eof()) {
        std::string message = "error converting \"" + s + "\" to " + std::string(typeid(result).name());
        throw bad_from_string(message);
    }
    return result;
}

template<>
bool from_string<bool>(const std::string &s) {
    std::string input;
    std::istringstream iss(s);
    iss >> input;
    return !(input == "0" || input == "false" || input == "False" || input == "FALSE");
}

#endif //HW11_FROM_STRING_H
