//
// Created by vikac on 27.11.2018.
//

#ifndef HW08_ANIMAL_H
#define HW08_ANIMAL_H

#include "Unit.h"

class Animal : public virtual Unit {
public:
    explicit Animal(int level, int strange);

    int strange();
private:
    int mStrange;
};

#endif //HW08_ANIMAL_H
