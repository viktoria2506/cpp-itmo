#include <iostream>
#include <string.h>
#include <cstdlib>
#include <iomanip>
#include <fstream>
#include <cstring>
#include <algorithm>
#include <iterator>

#include "String.h"

using namespace std;

String::String(const char* s){
    this->length = strlen(s);
    this->mStr = new char[this->length + 1];
    strcpy(this->mStr, s);
}

String::String(const String& s){
    this->length = s.length;
    this->mStr = new char[this->length + 1];
    strcpy(this->mStr, s.mStr);
}

String::String(size_t n, char c){
    this->length = n;
    this->mStr = new char[n + 1];
    for (size_t i = 0; i < this->length; i++)
        this->mStr[i] = c;
}

String::~String(){
    delete[] mStr;
}


String& String::append(const String &s){
    size_t n = this->length + strlen(s.mStr);

    char* buf = new char[n + 1];

    for (size_t i = 0; i < this->length; i++)
        buf[i] = this->mStr[i];
    for (size_t i = this->length, j = 0; i <= n; i++, j++)
        buf[i] = s.mStr[j];

    delete[] this->mStr;
    this->length = n;
    this->mStr = buf;

    return *this;
}


String& String::operator= (const String& s){
    delete[] this->mStr;
    this->length = strlen(s.mStr);
    this->mStr = new char[this->length + 1];
    strcpy(this->mStr, s.mStr);
    return *this;
}


std::ostream& operator<<(ostream& os, const String& obj) {
    return os << obj.mStr;
}

std::istream& operator>>(istream& is, String& obj) {
    char BUFF[2048];
    is.getline(BUFF, sizeof BUFF);
    obj = BUFF;
    return is;
}

String &String::operator+=(const String &s) {
    append(s);
}

String String::operator+(const String &s) const {
    String bufStr = *this;
    bufStr.append(s);
    return bufStr;
}
