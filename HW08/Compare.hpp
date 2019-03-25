//
// Created by vikac on 25.11.2018.
//

#ifndef HW08_COMPARE_H
#define HW08_COMPARE_H

template <typename T, typename S>
bool compare(T const& x, T const& y, S (T::*f) () const) {
    S t1 = (x.*f)();
    S t2 = (y.*f)();
    return t1 < t2;
};

#endif //HW08_COMPARE_H
