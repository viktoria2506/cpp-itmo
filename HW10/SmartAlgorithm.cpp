//
// Created by vikac on 25.01.2019.
//

#include "SmartAlgorithm.h"

std::vector<Route> SmartAlgorithm::createRoutes(std::vector<Point> v, int max_size, Metric& m) {
    unsigned int num = (v.size() + max_size - 1) / max_size;
    std::vector<Route> res(num, Route(std::vector<Point>()));
    for (size_t i = 0; i < v.size(); ++i) {
        res[i % num].points.push_back(v[i]);
    }
    for (auto &re : res) {
        minimization(re, m);
    }
    return res;
}