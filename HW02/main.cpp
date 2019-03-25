#include <iostream>

using namespace std;

class Report {
private:
    string adno;
    char name[20];
    float marks[5];

    float getAvg() {
        return (marks[0] + marks[1] + marks[2] + marks[3] + marks[4]) / 5;
    }

    float average;
public:
    Report () {};
    void readInfo() {
        cin >> adno;
        if (adno.length()  != 4) {
            cout << "Invalid admin. number";
        }
        cin >> name;
        for (int i = 0; i < 5; i++) {
            cin >> marks[i];
        }
        average = getAvg();
    }

    void displayInfo() {
        cout << "admin. number: " << adno << '\n';
        cout << "name: " << name << '\n';
        cout << "marks: ";
        for (int i = 0; i < 5; i++) {
            cout << marks[i] << ' ';
        }
        cout << '\n';
        cout << "average: " << average <<  '\n';
    }
};

int main() {


    Report student;
    student.readInfo();
    student.displayInfo();
    return 0;
}