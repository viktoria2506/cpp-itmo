cmake_minimum_required(VERSION 3.9)
project(HW10)

set(CMAKE_CXX_STANDARD 11)

add_executable(HW10 main.cpp Point.h Route.h RouteAlgorithm.h Metric.h RouteAlgorithm.cpp Point.cpp AverageDistance.h SumDistance.h MaxDistance.h AverageDistance.cpp SumDistance.cpp MaxDistance.cpp RandomAlgorithm.cpp RandomAlgorithm.h SizeAlgorithm.h SizeAlgorithm.cpp SmartAlgorithm.h SmartAlgorithm.cpp)