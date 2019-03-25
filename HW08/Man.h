//
// Created by vikac on 27.11.2018.
//

#ifndef HW08_MAN_H
#define HW08_MAN_H

#include "Unit.h"

class Man : public virtual Unit {
public:
    explicit Man(int level, int iq);

    int iq();
private:
    int mIq;
};

#endif //HW08_MAN_H
