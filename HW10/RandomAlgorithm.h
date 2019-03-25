//
// Created by vikac on 25.01.2019.
//

#ifndef HW10_RANDOMALGORITHM_H
#define HW10_RANDOMALGORITHM_H

#include "RouteAlgorithm.h"

class RandomAlgorithm : public RouteAlgorithm {
public:
    std::vector<Route> createRoutes(std::vector<Point> v, int max_size, Metric& m) override;

};

#endif //HW10_RANDOMALGORITHM_H
