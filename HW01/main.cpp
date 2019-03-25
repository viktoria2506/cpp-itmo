#include <iostream>

using namespace std;

class Box {
    int a, b, c;
public:
    Box() {};

    Box(int length, int breadth, int height) {
        a = length;
        b = breadth;
        c = height;
    };

    Box (Box &B) {
        a = B.a;
        b = B.b;
        c = B.c;
    }

    int length() {
        return a;
    }

    int breadth() {
        return b;
    }

    int height() {
        return c;
    }

    Box& operator= (const Box& A) {
        a = A.a;
        b = A.b;
        c = A.c;
        return *this;
    }
};

int Volume(Box &A) {
    return A.length() * A.breadth() * A.height();
}

int Volume(int A = 0, int B = 0, int C = 0) {
    return A * B * C;
}

Box Present;

Box& getBox() {
    return Present;
}


int main() {
    int A, B, C;
    cin >> A >> B >> C;
    getBox() = Box(A, B, C);
    int V = Volume(Present);
    cout << V << ' ' << Volume() << ' ' << Volume(A, B, C);
    return 0;
}