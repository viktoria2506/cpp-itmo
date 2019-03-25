#include <iostream>
#include "from_string.h"
#include "gtest/gtest.h"

int main() {

   /* TEST(from_string, string)
    {
        EXPECT_EQ(from_string<std::string>("aba"), "aba");
        EXPECT_EQ(from_string<std::string>("aba caba"), "aba caba");
        EXPECT_EQ(from_string<std::string>(""), "");
    }

    TEST(from_string, ints)
    {
        EXPECT_EQ(from_string<int>("10"), 10);
        EXPECT_EQ(from_string<int>("+10"), 10);
        EXPECT_EQ(from_string<int>("-10"), -10);

        EXPECT_THROW(from_string<int>("0.1"), std::runtime_error);
        EXPECT_THROW(from_string<int>("1.000000e-02"), std::runtime_error);
        EXPECT_THROW(from_string<int>("0x1.47ae147ae147bp-7"), std::runtime_error);

        EXPECT_THROW(from_string<int>(" 10"), std::runtime_error);
        EXPECT_THROW(from_string<int>("10 "), std::runtime_error);
        EXPECT_THROW(from_string<int>(" 10 "), std::runtime_error);

        EXPECT_THROW(from_string<unsigned>("-10"), std::runtime_error);

        EXPECT_THROW(from_string<unsigned>(" "), std::runtime_error);
        EXPECT_THROW(from_string<unsigned>("aba"), std::runtime_error);
    }

    TEST(from_string, doubles)
    {
        EXPECT_EQ(from_string<double>("10"), 10);
        EXPECT_EQ(from_string<double>("+10"), 10);
        EXPECT_EQ(from_string<double>("-10"), -10);

        EXPECT_EQ(from_string<double>("0.01"), 0.01);
        EXPECT_EQ(from_string<double>("1.000000e-02"), 0.01);
        EXPECT_EQ(from_string<double>("0x1.47ae147ae147bp-7"), 0.01);

        EXPECT_THROW(from_string<double>(" 10"), std::runtime_error);
        EXPECT_THROW(from_string<double>("10 "), std::runtime_error);
        EXPECT_THROW(from_string<double>(" 10 "), std::runtime_error);

        EXPECT_THROW(from_string<double>(" "), std::runtime_error);
        EXPECT_THROW(from_string<double>("aba"), std::runtime_error);
    }
*/
    std::string s1("123");

    try {
        int a1 = from_string<int>(s1);
        std::cout << std::fixed << a1 << '\n';
    } catch (bad_from_string &e) {
        std::cout << e.what() << '\n';
    }

    try {
        double b1 = from_string<double>(s1);
        std::cout << std::fixed << b1 << '\n';
    } catch (bad_from_string &e) {
        std::cout << e.what() << '\n';
    }

    try {
        std::string c1 = from_string<std::string>(s1);
        std::cout << std::fixed << c1 << '\n';
    } catch (bad_from_string &e) {
        std::cout << e.what() << '\n';
    }

    std::string s2("12.3");

    try {
        int a2 = from_string<int>(s2);
        std::cout << std::fixed << a2 << '\n';
    } catch (bad_from_string &e) {
        std::cout << e.what() << '\n';
    }

    try {
        double b2 = from_string<double>(s2);
        std::cout << std::fixed << b2 << '\n';
    } catch (bad_from_string &e) {
        std::cout << e.what() << '\n';
    }

    try {
        std::string c2 = from_string<std::string>(s2);
        std::cout << std::fixed << c2 << '\n';
    } catch (bad_from_string &e) {
        std::cout << e.what() << '\n';
    }

    std::string s3("abc");

    try {
        int a3 = from_string<int>(s3);
        std::cout << std::fixed << a3 << '\n';
    } catch (bad_from_string &e) {
        std::cout << e.what() << '\n';
    }

    try {
        double b3 = from_string<double>(s3);
        std::cout << std::fixed << b3 << '\n';
    } catch (bad_from_string &e) {
        std::cout << e.what() << '\n';
    }

    try {
        std::string c3 = from_string<std::string>(s3);
        std::cout << std::fixed << c3 << '\n';
    } catch (bad_from_string &e) {
        std::cout << e.what() << '\n';
    }

    return 0;
}