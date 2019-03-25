#include <iostream>
#include <vector>
#include "ImpreciseNumber.h"

int main() {

    ImpreciseNumber a;
    ImpreciseNumber b;
    std::cin >> a;
    std::cin >> b;
    std::vector <std::pair<std::string, ImpreciseNumber>> v = {
            {"a", a},
            {"b", b},
            {"a+b", a+b},
            {"b+a", b+a},
            {"a-b", a-b},
            {"b-a", b-a},
            {"a*b", a*b},
            {"b*a", b*a},
            {"a/b", a/b},
            {"a/a", a/a},
            {"a-a", a-a},
            {"b%a", b%a}
    };

    for (auto t : v) {
        std::cout << t.first << " = " << t.second << '\n';
    }

    return 0;
}