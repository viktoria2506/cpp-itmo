//
// Created by vikac on 24.11.2018.
//

#ifndef HW06_IMPRECISENUMBER_H
#define HW06_IMPRECISENUMBER_H

#include <iostream>
#include <cmath>

class ImpreciseNumber {
public:
    ImpreciseNumber ();
    ImpreciseNumber (double base);
    ImpreciseNumber (double base = 0.0, double fault = 0.0);
    ImpreciseNumber (const ImpreciseNumber& a);

    ImpreciseNumber operator+ () const;
    ImpreciseNumber operator- () const;
    ImpreciseNumber operator++ (int);
    ImpreciseNumber& operator++ ();
    ImpreciseNumber operator-- (int);
    ImpreciseNumber& operator-- ();

    ImpreciseNumber operator+ (const ImpreciseNumber& b) const;
    ImpreciseNumber operator- (const ImpreciseNumber& b) const;
    ImpreciseNumber operator* (const ImpreciseNumber& b) const;
    ImpreciseNumber operator/ (const ImpreciseNumber& b) const;
    ImpreciseNumber operator% (const ImpreciseNumber& b) const;
    ImpreciseNumber operator+= (const ImpreciseNumber& b);
    ImpreciseNumber operator-= (const ImpreciseNumber& b);
    ImpreciseNumber operator*= (const ImpreciseNumber& b);
    ImpreciseNumber operator/= (const ImpreciseNumber& b);
    ImpreciseNumber operator%= (const ImpreciseNumber& b);

    ImpreciseNumber operator~ () const;

    ImpreciseNumber operator<<= (int n);
    ImpreciseNumber operator>>= (int n);

    ImpreciseNumber operator&= (const ImpreciseNumber& b);
    ImpreciseNumber operator|= (const ImpreciseNumber& b);
    ImpreciseNumber operator^= (const ImpreciseNumber& b);
    ImpreciseNumber operator>> (int n);
    ImpreciseNumber operator<< (int n);
    ImpreciseNumber operator& (const ImpreciseNumber& b) const;
    ImpreciseNumber operator| (const ImpreciseNumber& b) const;
    ImpreciseNumber operator^ (const ImpreciseNumber& b) const;

    bool operator< (const ImpreciseNumber& b) const;
    bool operator> (const ImpreciseNumber& b) const;
    bool operator<= (const ImpreciseNumber& b) const;
    bool operator>= (const ImpreciseNumber& b) const;
    bool operator== (const ImpreciseNumber& b) const;
    bool operator!= (const ImpreciseNumber& b) const;

    bool operator! () const;
    bool operator&& (const ImpreciseNumber& b) const;
    bool operator|| (const ImpreciseNumber& b) const;

    operator bool() const;

    ImpreciseNumber& operator* () const;
    ImpreciseNumber& operator= (const ImpreciseNumber& a);

    double operator[] (int n);
    double operator() (int n);
    template <typename T>
    long operator,(const T& data);

    friend std::ostream& operator<<(std::ostream& out, const ImpreciseNumber &a);
    friend std::istream& operator>>(std::istream& in, ImpreciseNumber &a);

protected:
    double mBase, mFault;
};


#endif //HW06_IMPRECISENUMBER_H

