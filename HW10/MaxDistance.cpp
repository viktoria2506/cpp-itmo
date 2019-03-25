//
// Created by vikac on 25.01.2019.
//

#include "MaxDistance.h"

double MaxDistance::calculate(Route r) {
    double mx = 0.0;
    for (int i = 1; i < r.points.size(); ++i) {
        mx = std::max(mx, distance(r.points[i], r.points[i - 1]));
    }
    return mx;
}