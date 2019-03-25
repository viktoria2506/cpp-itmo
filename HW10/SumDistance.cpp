//
// Created by vikac on 28.01.2019.
//

#include "SumDistance.h"

double SumDistance::calculate(Route r) {
    double sum = 0.0;
    for (int i = 1; i < r.points.size(); ++i) {
        sum += distance(r.points[i], r.points[i - 1]);
    }
    return sum;
}
