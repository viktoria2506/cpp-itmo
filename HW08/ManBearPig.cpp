//
// Created by vikac on 10.12.2018.
//
#include "ManBearPig.h"

ManBearPig::ManBearPig(int level, int iq, int jump, int speed, int rageBoost) :
        Unit(level, 1000),
        Man(level, iq),
        Animal(level, 500),
        Bear(level, jump),
        Pig(level, speed) {
    mRageBoost = rageBoost;
}

ManBearPig::ManBearPig(Man &man, Bear &bear, Pig &pig) :
        Unit(man.level() + 1, 1000),
        Man(man.level() + 1, man.iq()),
        Animal(man.level() + 1, 500),
        Bear(man.level() + 1, bear.jump()),
        Pig(man.level() + 1, pig.speed()) {
    mRageBoost = 50;
}

int ManBearPig::rageBoost() {
    return mRageBoost;
}
