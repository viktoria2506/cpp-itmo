#include "Array.h"

template<class T>
Array<T>::Array(size_t size, const T& value){
    mSize = size;
    mData = (T*) new char[sizeof(T) * mSize];
    for (int i = 0; i < mSize; ++i) {
        new(mData + i) T(value);
    }
}

template<class T>
Array<T>::Array(const Array<T>& array){
    mSize = array.mSize;
    mData = (T*) new char[sizeof(T) * mSize];
    for (int i = 0; i < mSize; ++i) {
        new(mData + i) T(array[i]);
    }
}

template<class T>
Array<T>::~Array() {
    clear();
}

template<class T>
Array<T>& Array<T>::operator=(const Array<T>& array) {
    clear();
    mSize = array.mSize;
    mData = (T*) new char[sizeof(T) * mSize];
    for (size_t i = 0; i < mSize; ++i) {
        new (mData + i) T(array[i]);
    }
    return *this;
}

template<class T>
size_t Array<T>::size() {
    return mSize;
}

template<class T>
T& Array<T>::operator[](size_t index) {
    if (index >= mSize)
        return mData[mSize];
    return mData[index];
}

template<class T>
const T& Array<T>::operator[](size_t index) const {
    if (index >= mSize)
        return mData[mSize];
    return mData[index];
}

template<typename T>
void Array<T>::clear() {
    for (size_t i = 0; i != mSize; ++i) {
        mData[i].~T();
    }
    delete[] (char*) mData;
}

template <class T>
void flatten(const T& value, std::ostream &out) {
    out << value << " ";
}

template <class T>
void flatten( Array<T> &array, std::ostream &out) {
    for (size_t i = 0; i < array.size(); ++i) {
        flatten(array[i], out);
    }
}

template<typename T>
Array<T>::Array(Array<T>&& array) : mData (array.mData), mSize (array.mSize) {
    array.mSize = 0;
    array.mData = nullptr;
}

template<typename T>
Array<T>& Array<T>::operator=(Array<T>&& array){
    clear();
    mData = array.mData;
    mSize = array.mSize;
    array.mSize = 0;
    array.mData = nullptr;
    return *this;
}