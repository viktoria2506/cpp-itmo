#include <iostream>
#include <cstdio>
#include <time.h>
#include <map>
#include "RouteAlgorithm.h"
#include "RandomAlgorithm.h"
#include "SizeAlgorithm.h"
#include "SmartAlgorithm.h"
#include "AverageDistance.h"
#include "SumDistance.h"
#include "MaxDistance.h"

std::map<std::string, RouteAlgorithm*> algo = {
        {"random", new RandomAlgorithm()},
        {"size",   new SizeAlgorithm()},
        {"smart",  new SmartAlgorithm()}
};
std::map<std::string, Metric*> metrics = {
        {"average", new AverageDistance()},
        {"sum",     new SumDistance()},
        {"max",     new MaxDistance()}
};

int main() {
    srand(time(0));
    std::vector<Point> points = {Point(0, 0), Point(0, 1), Point(1, 0), Point(1, 1)};

    std::freopen("../config.in", "r", stdin);
    std::string algorithm, metric;
    std::cin >> algorithm >> metric;

    RouteAlgorithm *ra = algo[algorithm];
    Metric *m = metrics[metric];


    std::vector<Route> routs = ra->createRoutes(points, 3, *m);
    for (int i = 0; i < routs.size(); ++i) {
        std::cout << "Rout " << i + 1 << " : \n";
        for (Point p : routs[i].points) {
            std::cout << p.getX() << ' ' << p.getY() << '\n';
        }
        std::cout << "------------------------\n";
    }
    return 0;
}