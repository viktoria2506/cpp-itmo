//
// Created by vikac on 27.11.2018.
//

#ifndef HW08_BEAR_H
#define HW08_BEAR_H

#include "Animal.h"

class Bear : public virtual Animal {
public:
    explicit Bear(int level, int jump);

    int jump();
private:
    int mJump;
};

#endif //HW08_BEAR_H
