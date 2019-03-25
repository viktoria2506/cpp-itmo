//
// Created by vikac on 25.11.2018.
//

#ifndef HW08_ISSAMEOBJECT_H
#define HW08_ISSAMEOBJECT_H

template <class T>
bool isSameObject(T const *p, T const *q) {
    return dynamic_cast<void const*>(p) == dynamic_cast<void const*>(q);
}

#endif //HW08_ISSAMEOBJECT_H
