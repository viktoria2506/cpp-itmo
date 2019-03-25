//
// Created by vikac on 20.01.2019.
//

#ifndef HW10_ROUTE_H
#define HW10_ROUTE_H

#include "Point.h"
#include <utility>
#include <vector>

class Route {
public:
    std::vector<Point> points;
    explicit Route(std::vector<Point> points) : points(std::move(points)) {};
};

#endif //HW10_ROUTE_H
