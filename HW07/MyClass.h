//
// Created by vikac on 27.11.2018.
//

#ifndef ARRAY_MYCLASS_H
#define ARRAY_MYCLASS_H

#include <iostream>

class MyClass {
private: int mNumb;
public:
    MyClass() = delete;
    explicit MyClass(int numb);
    MyClass operator= (const MyClass& A) = delete;
    int getNumber() const;

};

std::ostream& operator<< (std::ostream& output, const MyClass& number);

#endif //ARRAY_MYCLASS_H
