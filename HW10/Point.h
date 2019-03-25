//
// Created by vikac on 20.01.2019.
//

#ifndef HW10_POINT_H
#define HW10_POINT_H

class Point {
public:
    explicit Point(double x = 0, double y = 0) : x(x), y(y) {};
    double getX() const { return x; }
    double getY() const { return y; }
    bool operator<(const Point& p) const {
        return getX() < p.getX() || (getX() == p.getX() && getY() < p.getY());
    }
private:
    double x, y;
};

double distance(const Point& q,const Point& p);

#endif //HW10_POINT_H
