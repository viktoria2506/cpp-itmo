#include <cstdio>
#include <vector>
#include <iostream>
#include <cstdlib>
#include "String.h"


using namespace std;


int main(){
    int lengthVector = 4;
    vector <String> vectString {"First", "Second", "Third", "Fourth"};


    for (int i = 0; i < lengthVector; i++){
        cout << i+1 << " " << vectString[i] << " (" << vectString[i].length << ')' << endl;
    }
    cout << "____________________________________" << endl;

     vectString[0].append(vectString[1]);
     cout << "test: 1.append(2) " << endl;

    for (int i = 0; i < lengthVector; i++){
        cout << i+1 << " " << vectString[i] << " (" << vectString[i].length << ')' << endl;
    }
    cout << "____________________________________" << endl;

     vectString[2] = vectString[1];
     cout << "test: 2 = 3 " << endl;

    for (int i = 0; i < lengthVector; i++){
        cout << i+1 << " " << vectString[i] << " (" << vectString[i].length << ')' << endl;
    }
    cout << "____________________________________" << endl;

     vectString[2] += vectString[0];
     cout << "test: 3 += 1 " << endl;

    for (int i = 0; i < lengthVector; i++){
        cout << i+1 << " " << vectString[i] << " (" << vectString[i].length << ')' << endl;
    }
    cout << "____________________________________" << endl;

    vectString[1].append(vectString[1]);
    cout << "test: 2.append(2) " << endl;

    for (int i = 0; i < lengthVector; i++){
        cout << i+1 << " " << vectString[i] << " (" << vectString[i].length << ')' << endl;
    }
    cout << "____________________________________" << endl;

    vectString[3] = vectString[1];
    cout << "test: 4 = 2 " << endl;

    for (int i = 0; i < lengthVector; i++){
        cout << i+1 << " " << vectString[i] << " (" << vectString[i].length << ')'<< endl;
    }
    cout << "____________________________________" << endl;
}
