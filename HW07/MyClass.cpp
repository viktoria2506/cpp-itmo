//
// Created by vikac on 10.12.2018.
//
#include "MyClass.h"

MyClass::MyClass(int numb) {
    mNumb = numb;
}


int MyClass::getNumber() const {
    return mNumb;
}

std::ostream& operator<<(std::ostream& output, const MyClass& number) {
    output <<  number.getNumber();
    return output;
}