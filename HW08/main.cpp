#include <iostream>

#include "ManBearPig.h"
#include "ComplexFunction.hpp"
#include "Compare.hpp"
#include "IsSameObject.hpp"

int main() {
    Man Kolya = Man(15, -10);
    Pig Jo = Pig(14, 15);
    Bear Max = Bear(69, 1488);
    ManBearPig Patrik = ManBearPig(Kolya, Max, Jo);
    std::cout << "Patrik:\n"<< "level: " << Patrik.level() << '\n' << "hp: " << Patrik.hp() << '\n' <<
              "iq: " << Patrik.iq() << '\n' << "strange: " << Patrik.strange() << '\n' << "speed: " <<
              Patrik.speed() << '\n' << "jump: " << Patrik.jump() << '\n' << "rageBoost: " <<
              Patrik.rageBoost() << '\n';

    std::string s1("Elf");
    std::string s2("Archer");
    bool r1 = compare(s1, s2, &std::string::size);
    bool r2 = compare(s1, s1, &std::string::size);
    std::cout << r1 << ' ' << r2 << '\n';

    Pig* a = new Pig(3, 4);
    Pig* b = new Pig(3, 4);
    Pig* c = a;


    bool r3 = isSameObject(a, b);
    bool r4 = isSameObject(a, c);
    std::cout << r3 << ' ' << r4 << '\n';

    return 0;
}