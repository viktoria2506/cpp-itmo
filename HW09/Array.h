#ifndef INC_2_ARRAY_H
#define INC_2_ARRAY_H

#include <iostream>

template <class T>
class Array {
public:
    explicit Array(size_t size = 0, const T& value = T());
    Array(const Array& );
    Array(Array&& );
    ~Array();

    Array& operator=(const Array& );
    Array& operator=(Array&& );

    size_t size();

    T& operator[](size_t);
    const T& operator[](size_t) const;

    void clear();

private:
    size_t mSize = 0;
    T* mData = nullptr;
};

#include "Array.hpp"

#endif //INC_2_ARRAY_H
