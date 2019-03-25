//
// Created by vikac on 20.01.2019.
//

#ifndef HW10_METRIC_H
#define HW10_METRIC_H

#include "Route.h"
#include <vector>

class Metric {
public:
    virtual double calculate(Route r)=0;
    virtual ~Metric() = default;
};


#endif //HW10_METRIC_H
