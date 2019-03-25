//
// Created by vikac on 25.11.2018.
//

#ifndef HW08_MANBEARPIG_H
#define HW08_MANBEARPIG_H


#include "Man.h"
#include "Bear.h"
#include "Pig.h"


class ManBearPig : public Man, public Pig, public Bear {
public:
    ManBearPig(int level, int iq, int jump, int speed, int rageBoost);

    ManBearPig(Man &man, Bear &bear, Pig &pig);

    int rageBoost();
private:
    int mRageBoost;
};


#endif //HW08_MANBEARPIG_H
