//
// Created by vikac on 10.12.2018.
//
#include "Man.h"
Man::Man(int level, int iq) : Unit(level, 200) {
    mIq = iq;
}

int Man::iq() {
    return mIq;
}