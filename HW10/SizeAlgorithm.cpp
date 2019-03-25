//
// Created by vikac on 25.01.2019.
//

#include "SizeAlgorithm.h"

std::vector<Route> SizeAlgorithm::createRoutes(std::vector<Point> v, int max_size, Metric& m)  {
    std::vector<Route> res;
    for (size_t i = 0; i < v.size();) {
        std::vector<Point> points;
        int sz = 1 + rand() % max_size;
        while(i < v.size() && sz > 0) {
            points.push_back(v[i++]);
            --sz;
        }
        res.emplace_back(points);
    }
    for (auto &re : res) {
        minimization(re, m);
    }
    return res;
}