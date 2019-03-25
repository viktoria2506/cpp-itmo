//
// Created by vikac on 21.01.2019.
//

#include "RouteAlgorithm.h"

void minimization(Route &r, Metric &m) {
    for (int it = 0; it < 1000; ++it) {
        std::vector<Point> points = r.points;
        double value = m.calculate(Route(points));

        std::shuffle(points.begin(), points.end(), std::mt19937(std::random_device()()));
        double newValue = m.calculate(Route(points));

        if (newValue < value) {
            r.points = points;
        }
    }
}







