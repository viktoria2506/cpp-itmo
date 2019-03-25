//
// Created by vikac on 10.12.2018.
//
#include "Pig.h"
Pig::Pig(int level, int speed) : Unit (level, 350), Animal(level, 75) {
    mSpeed = speed;
}

int Pig::speed() {
    return mSpeed;
}
