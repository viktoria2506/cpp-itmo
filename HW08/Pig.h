//
// Created by vikac on 27.11.2018.
//

#ifndef HW08_PIG_H
#define HW08_PIG_H


#include "Animal.h"

class Pig : public virtual Animal {
public:
    explicit Pig(int level, int speed);
    virtual ~Pig(){};

    int speed();
private:
    int mSpeed;
};

#endif //HW08_ANIMAL_H
