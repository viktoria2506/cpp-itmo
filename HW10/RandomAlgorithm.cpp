//
// Created by vikac on 25.01.2019.
//

#include "RandomAlgorithm.h"

std::vector<Route> RandomAlgorithm::createRoutes(std::vector<Point> v, int max_size, Metric& m) {
    std::set<Point> used;
    std::vector<Route> res;
    std::vector<Point> points = v;

    while (true) {
        std::vector<Point> t1 = points;
        std::shuffle(t1.begin(), t1.end(), std::mt19937(std::random_device()()));
        std::vector<Point> r1;
        for (size_t i = 0; i < max_size; ++i) {
            if (i == t1.size()) break;
            r1.push_back(t1[i]);
        }

        Route route1(r1);
        res.push_back(route1);

        for (auto point : route1.points) {
            used.insert(point);
        }

        std::vector<Point> temp;
        for (Point p : points) {
            if (used.count(p) > 0) continue;
            temp.push_back(p);
        }
        points = temp;

        if (used.size() == v.size()) break;
    }

    for (auto &re : res) {
        minimization(re, m);
    }
    return res;
}