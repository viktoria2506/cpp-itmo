#include <algorithm>
#include "Array.h"

template<typename T>
Array<T>::Array(size_t length, const T& value) {
    mLength = length;
    mData = static_cast<T*>(operator new(mLength * sizeof(T)));
    for (int i = 0; i < mLength; i++){
        new (mData + i) T(value);
    }
}

template<typename T>
Array<T>::Array(const Array &array) {
    mLength = array.mLength;
    mData = static_cast<T*>(operator new(mLength * sizeof(T)));
    for (int i = 0; i < array.mLength; i++){
        new (mData + i) T(array[i]);
    }
}

template<typename T>
Array<T>::~Array() {
    clear();
}

template<typename T>
Array<T>& Array<T>::operator=(const Array &array) {
    clear();
    mLength = array.mLength;
    mData = static_cast<T*>(operator new(mLength * sizeof(T)));
    for (int i = 0; i < array.mLength; i++){
        new (mData + i) T(array[i]);
    }
    return *this;
}

template<typename T>
size_t Array<T>::size() const {
    return mLength;
}

template<typename T>
T &Array<T>::operator[](const size_t index) {
    return mData[index];
}

template<typename T>
const T &Array<T>::operator[](size_t index) const {
    return mData[index];
}

template<typename T>
void Array<T>::clear() {
    for (size_t i = 0; i != mLength; ++i) {
        mData[i].~T();
    }
    delete[] (char *) mData;
}



template<typename T>
bool less(T& a, T& b) {return a < b;}

template<typename T>
struct Greater {
    bool operator ()(T& a, T& b) const {
        return b < a;
    }
};

template <typename T, typename Comparator>
T& minimum(Array<T> array, Comparator comp) {
    T& min = array[0];
    for (int i = 1; i < array.size(); ++i) {
        if (comp(array[i], min)) {
            min = array[i];
        }
    }
    return min;
}

template<typename T>
void flatten(const Array<T>& array, std::ostream& out) {
    for (int i = 0; i < array.size(); ++i) {
        out << array[i] << " ";
    }
}

template<typename T>
void flatten(const Array<Array<T>>& array, std::ostream& out) {
    for (int i = 0; i < array.size(); ++i) {
        flatten(array[i], out);
    }
}
