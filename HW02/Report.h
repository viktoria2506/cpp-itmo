#pragma once

#include <cstdio>
#include <cstring>

    class Report {
    private:
        static const int MARKS_NUM;
        static const int LENGHT;

        int adno;
        char name[LENGHT];
        float marks[MARKS_NUM];

        float getAvg();
        float average;
    public:

        Report (int adno; const char* name; float marks[])

        void readInfo (int adno; const char* name; float marks[]);

        void displayInfo();

};
