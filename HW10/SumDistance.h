//
// Created by vikac on 28.01.2019.
//

#ifndef HW10_SUMDISTANCE_H
#define HW10_SUMDISTANCE_H

#include "Metric.h"

class SumDistance: public Metric {
public:
    double calculate(Route r) override;
};

#endif //HW10_SUMDISTANCE_H
