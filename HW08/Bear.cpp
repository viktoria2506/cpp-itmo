//
// Created by vikac on 10.12.2018.
//

#include "Bear.h"
Bear::Bear(int level, int jump) : Unit(level, 350), Animal(level, 169) {
    mJump = jump;
}

int Bear::jump() {
    return mJump;
}