//
// Created by vikac on 25.11.2018.
//

#ifndef HW08_COMPLEXFUNCTION_H
#define HW08_COMPLEXFUNCTION_H

typedef int (*SubFunction1)(double);
typedef int* (*SubFunction2)(char const*);
typedef  SubFunction2 (*ComplexFunction) (int, SubFunction1);

ComplexFunction qwe(int , int);

#endif //HW08_COMPLEXFUNCTION_H
