#pragma once
#include <istream>

template <typename T>
class Array{
public:
    explicit Array(size_t size = 0, const T& value = T());
    Array(const Array &);

    ~Array();

    Array& operator=(const Array&);
    size_t size() const;
    T& operator[](size_t);
    const T& operator[](size_t) const;

    void clear();
private:
    size_t mLength;
    T* mData;
};
#include "Array.hpp"