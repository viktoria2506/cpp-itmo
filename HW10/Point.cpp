//
// Created by vikac on 21.01.2019.
//

#include <cmath>
#include "Point.h"

double distance(const Point& q,const Point& p) {
    return sqrt((q.getX() - p.getX()) * (q.getX() - p.getX()) + (q.getY() - p.getY())*(q.getY() - p.getY()));
}