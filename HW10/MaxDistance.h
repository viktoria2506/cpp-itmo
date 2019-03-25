//
// Created by vikac on 25.01.2019.
//

#ifndef HW10_MAXDISTANCE_H
#define HW10_MAXDISTANCE_H

#include "Metric.h"

class MaxDistance: public Metric {
public:
    double calculate(Route r) override;
};

#endif //HW10_MAXDISTANCE_H
