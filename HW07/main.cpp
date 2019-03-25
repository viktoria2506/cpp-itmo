#include <istream>
#include <iostream>
#include "Array.h"
#include "MyClass.h"

int main() {
    Array<int> ints(3);
    ints[0] = 2;
    ints[1] = 3;
    ints[2] = 1;
    int min = minimum(ints, less<int>);
    int max = minimum(ints, Greater<int>());
    std::cout << min << " " << max << '\n';
    std::cout << "___________________________________\n";

    Array<int> a(2, 0);
    a[0] = 1;
    a[1] = 5;
    flatten(a, std::cout);
    std::cout << '\n';
    std::cout << "___________________________________\n";

    Array<Array<int> > a_of_a(2, a);
    flatten(a_of_a, std::cout);
    std::cout << '\n';
    std::cout << "___________________________________\n";

    Array<double> doubles(10, 0.0);
    flatten(doubles, std::cout);
    std::cout << '\n';
    std::cout << "___________________________________\n";

    Array<std::string> first(2, std::string("1234"));
    Array<std::string> second(5, std::string("Hello, world"));
    first = second;
    for (int i = 0; i < first.size(); ++i) {
        std::cout << first[i] << '\n';
    }
    std::cout << "___________________________________\n";

    Array<std::string> xx(15, std::string("Hello"));
    Array<std::string> yy = xx;
    Array<std::string> zz(15, std::string("World"));;
    xx = zz;
    for (int i = 0; i < xx.size(); ++i) std::cout << xx[i] << " ";
    std::cout << '\n';
    std::cout << "___________________________________\n";
    Array<std::string> cArray(3, std::string("boom"));
    Array<Array<std::string>> crArray(cArray.size(), cArray);
    Array<Array<Array<std::string>>> craArray(crArray.size(), crArray);
    Array<Array<Array<Array<std::string>>>> crazyArray(craArray.size(), craArray);
    std::cout << crazyArray.size() << '\n';
    flatten(crazyArray, std::cout);
    std::cout << '\n';
    std::cout << "___________________________________\n";

    Array<MyClass> arr(3, MyClass(3));
    flatten(arr, std::cout);
}