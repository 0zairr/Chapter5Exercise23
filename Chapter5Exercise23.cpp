/*
File name: Chapter5Exercise23cpp
Programmer: Ozair Ghaissi
Date: 11/23/2024
*/

#include <iostream>
using namespace std;

int main() {
    // Pattern A
    for (int i = 1; i <= 8; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "+";
        }
        cout << endl;
    }

    cout << endl; // Separate patterns

    // Pattern B
    for (int i = 8; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "+";
        }
        cout << endl;
    }

    return 0;
}