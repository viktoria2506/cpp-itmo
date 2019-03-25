//
// Created by vikac on 28.01.2019.
//

#ifndef HW10_AVERAGEDISTANCE_H
#define HW10_AVERAGEDISTANCE_H

#include "Metric.h"

class AverageDistance : public Metric {
public:
    double calculate(Route r) override;
};

#endif //HW10_AVERAGEDISTANCE_H
