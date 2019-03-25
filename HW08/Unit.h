//
// Created by vikac on 27.11.2018.
//

#ifndef HW08_UNIT_H
#define HW08_UNIT_H

class Unit {
public:
    Unit(int level, int hp);

    int level();

    int hp();
private:
    int mLevel;
    int mHp;
};

#endif //HW08_UNIT_H
