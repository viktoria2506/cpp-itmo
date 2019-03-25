//
// Created by vikac on 20.01.2019.
//

#ifndef HW10_ROUTE_ALGORITHM_H
#define HW10_ROUTE_ALGORITHM_H

#include "Route.h"
#include <vector>
#include <algorithm>
#include <set>
#include "Metric.h"

class RouteAlgorithm {
public:
    virtual std::vector<Route> createRoutes(std::vector<Point> v, int max_size, Metric& m)=0;
    virtual ~RouteAlgorithm() = default;
};

void minimization(Route& r, Metric& m);

#endif //HW10_ROUTE_ALGORITHM_H
