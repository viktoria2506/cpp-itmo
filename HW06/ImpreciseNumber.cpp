//
// Created by vikac on 24.11.2018.
//

#include "ImpreciseNumber.h"

ImpreciseNumber::ImpreciseNumber() {
    mBase = 0.0;
    mFault = 0.0;
}
ImpreciseNumber::ImpreciseNumber(double base) {
    mBase  = base;
    mFault = 0.0;
}
ImpreciseNumber::ImpreciseNumber(double base, double fault) {
    mBase = base;
    mFault = fault;
}
ImpreciseNumber::ImpreciseNumber(ImpreciseNumber const& a) {
    mBase = a.mBase;
    mFault = a.mFault;
}

ImpreciseNumber ImpreciseNumber::operator+(ImpreciseNumber const& b) const {
    double mn = mBase - mFault + b.mBase - b.mFault;
    double mx = mBase + mFault + b.mBase + b.mFault;
    double base = (mn + mx) / 2;
    double fault = mx - base;
    return ImpreciseNumber(base, fault);
}
ImpreciseNumber ImpreciseNumber::operator-() const {
    return ImpreciseNumber (-mBase, mFault);
}
ImpreciseNumber ImpreciseNumber ::operator+() const {
    return *this;
}
ImpreciseNumber ImpreciseNumber::operator-(const ImpreciseNumber &b) const {
    return *this + (-b);
}
ImpreciseNumber ImpreciseNumber::operator*(const ImpreciseNumber &b) const {
    double v1 = (mBase - mFault)* (b.mBase - b.mFault);
    double v2 = (mBase - mFault)* (b.mBase + b.mFault);
    double v3 = (mBase + mFault)* (b.mBase - b.mFault);
    double v4 = (mBase + mFault)* (b.mBase + b.mFault);
    double mn = std::min(std::min(v1, v2), std::min(v3, v4));
    double mx = std::max(std::max(v1, v2), std::max(v3, v4));
    double base = (mn + mx) / 2;
    double fault = mx - base;
    return ImpreciseNumber(base, fault);
}
ImpreciseNumber ImpreciseNumber::operator/(const ImpreciseNumber &b) const{
    double v1 = (mBase - mFault)/ (b.mBase - b.mFault);
    double v2 = (mBase - mFault)/ (b.mBase + b.mFault);
    double v3 = (mBase + mFault)/ (b.mBase - b.mFault);
    double v4 = (mBase + mFault)/ (b.mBase + b.mFault);
    double mn = std::min(std::min(v1, v2), std::min(v3, v4));
    double mx = std::max(std::max(v1, v2), std::max(v3, v4));
    double base = (mn + mx) / 2;
    double fault = mx - base;
    return ImpreciseNumber(base, fault);
}
ImpreciseNumber ImpreciseNumber::operator%(const ImpreciseNumber &b) const {
    return ImpreciseNumber();
}
ImpreciseNumber ImpreciseNumber::operator+=(const ImpreciseNumber &b) {
    return *this + b;
}
ImpreciseNumber ImpreciseNumber::operator-=(const ImpreciseNumber &b) {
    return *this - b;
}
ImpreciseNumber ImpreciseNumber::operator*=(const ImpreciseNumber &b) {
    return  *this * b;
}
ImpreciseNumber ImpreciseNumber::operator/=(const ImpreciseNumber &b) {
    return  *this / b;
}
ImpreciseNumber ImpreciseNumber::operator%=(const ImpreciseNumber &b) {
    return  *this % b;
}
ImpreciseNumber ImpreciseNumber::operator++(int) {
    return ImpreciseNumber(mBase++, mFault);
}
ImpreciseNumber& ImpreciseNumber::operator++() {
    return *this;
}
ImpreciseNumber ImpreciseNumber::operator--(int) {
    return ImpreciseNumber(mBase--, mFault);
}
ImpreciseNumber& ImpreciseNumber::operator--() {
    return *this;
}
ImpreciseNumber& ImpreciseNumber::operator*() const {
    return *ImpreciseNumber(*this);
}
bool ImpreciseNumber::operator<(const ImpreciseNumber &b) const {
    if (mBase - mFault == b.mBase - b.mFault) {
        return (mBase + mFault < b.mBase + b.mFault);
    } else {
        return (mBase - mFault < b.mBase - b.mFault);
    }
}
bool ImpreciseNumber::operator>(const ImpreciseNumber &b) const {
    return b < *this;
}
bool ImpreciseNumber::operator<=(const ImpreciseNumber &b) const {
    return !(*this > b);
}
bool ImpreciseNumber::operator>=(const ImpreciseNumber &b) const {
    return b <= *this;
}
bool ImpreciseNumber::operator==(const ImpreciseNumber &b) const {
    return mBase == b.mBase && mFault == b.mFault;
}
bool ImpreciseNumber::operator!=(const ImpreciseNumber &b) const {
    return !(*this == b);
}
ImpreciseNumber& ImpreciseNumber::operator=(const ImpreciseNumber &a) {
    return *ImpreciseNumber(a);
}
double ImpreciseNumber::operator[](int n) {
    if (n == 0) {
        return mBase;
    } else if (n == 1) {
        return mFault;
    } else {
        return 0;
    }
}
ImpreciseNumber ImpreciseNumber::operator<<(int n) {
    mBase *= pow (2, n);
    mFault *= pow (2, n);
    return *this;
}
ImpreciseNumber ImpreciseNumber::operator>>(int n) {
    mBase /= pow(2, n);
    mFault /= pow(2, n);
    return *this;
}
ImpreciseNumber ImpreciseNumber::operator<<=(int n) {
    return *this<<n;
}
ImpreciseNumber ImpreciseNumber::operator>>=(int n) {
    return *this>>n;
}
ImpreciseNumber ImpreciseNumber::operator&(const ImpreciseNumber &b) const {
    double mn = std::max(mBase - mFault, b.mBase - b.mFault);
    double mx = std::min(mBase + mFault, b.mBase + b.mFault);
    if (mn <= mx) {
        double base = (mn + mx)/2;
        double fault = mx - base;
        return ImpreciseNumber (base, fault);
    } else {
        return ImpreciseNumber ();
    }
}
ImpreciseNumber ImpreciseNumber::operator|(const ImpreciseNumber &b) const {
    double mn = std::max(mBase - mFault, b.mBase - b.mFault);
    double mn1 = std::min(mBase - mFault, b.mBase - b.mFault);
    double mx = std::min(mBase + mFault, b.mBase + b.mFault);
    double mx1 = std::max(mBase + mFault, b.mBase + b.mFault);
    if (mn <= mx) {
        double base = (mn1 + mx1) / 2;
        double fault = mx1 - base;
        return ImpreciseNumber (base, fault);
    } else {
        return ImpreciseNumber ();
    }
}
bool ImpreciseNumber::operator!() const {
    return !(bool) *this;
}
bool ImpreciseNumber::operator&&(const ImpreciseNumber &b) const {
    return (bool) *this && (bool) b;
}
bool ImpreciseNumber::operator||(const ImpreciseNumber &b) const {
    return (bool) *this || (bool) b;
}
ImpreciseNumber ImpreciseNumber::operator&=(const ImpreciseNumber &b) {
    return *this & b;
}
ImpreciseNumber ImpreciseNumber::operator|=(const ImpreciseNumber &b) {
    return *this | b;
}
ImpreciseNumber ImpreciseNumber::operator^(const ImpreciseNumber &b) const {
    return ImpreciseNumber ();
}
ImpreciseNumber ImpreciseNumber::operator^=(const ImpreciseNumber &b) {
    return ImpreciseNumber ();
}
ImpreciseNumber ImpreciseNumber::operator~() const {
    return -*this;
}
ImpreciseNumber::operator bool() const {
    return !(mBase == 0 && mFault == 0);
}
std::ostream& operator<<(std::ostream& out, const ImpreciseNumber &a) {
    out << a.mBase << "+-" << a.mFault;
    return out;
}

std::istream& operator>>(std::istream &in, ImpreciseNumber &a) {
    in >> a.mBase >> a.mFault;
    return in;
}

double ImpreciseNumber::operator()(int n) {
    return 2 * mFault * n;
}

template<typename T>
long ImpreciseNumber::operator,(const T &data) {
    return 0;
}
