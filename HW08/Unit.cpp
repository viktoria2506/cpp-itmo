//
// Created by vikac on 10.12.2018.
//
#include "Unit.h"
Unit::Unit(int level, int hp) {
    mLevel = level;
    mHp = hp;
}

int Unit::level() {
    return mLevel;
}

int Unit::hp() {
    return mHp;
}
