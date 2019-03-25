/*#include <algorithm>
#include "Array.h"

template<typename T>
Array<T>::Array(size_t size, const T& value) {
    length = size;
    data = (T*) new char[sizeof(T) * length];
    for (int i = 0; i < length; i++){
        new (data + i) T(value);
    }
}

template<typename T>
Array<T>::Array(const Array &array) {
    length = array.length;
    data = (T*) new char[sizeof(T) * length];
    for (int i = 0; i < array.length; i++){
        new (data + i) T(array[i]);
    }
}

template<typename T>
Array<T>::~Array() {
    clear();
}

template<typename T>
Array<T>& Array<T>::operator=(const Array &array) {
    clear();
    length = array.length;
    data = (T *) new char[sizeof(T) * length];
    for (int i = 0; i < array.length; i++){
        new (data + i) T(array[i]);
    }
    return *this;
}

template<typename T>
size_t Array<T>::size() const {
    return length;
}

template<typename T>
T &Array<T>::operator[](const size_t index) {
    return data[index];
}

template<typename T>
const T &Array<T>::operator[](size_t index) const {
    return data[index];
}

template<typename T>
void Array<T>::clear() {
    for (size_t i = 0; i != length; ++i) {
        data[i].~T();
    }
    delete[] (char *) data;
}

*/