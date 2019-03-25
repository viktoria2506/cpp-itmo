//
// Created by vikac on 10.12.2018.
//

#include "Animal.h"

int Animal::strange() {
    return mStrange;
}
 Animal::Animal(int level, int strange) : Unit(level, 350) {
    mStrange = strange;
}