#include <iostream>

using namespace std;

int main() {

    int isWinter, isRaining;


    cin >> isWinter;


    cin >> isRaining;


    if (isWinter == 1) {
        cout << "Bus" << endl;
    } else {
        if (isRaining == 1) {
            cout << "Walk" << endl;
        } else {
            cout << "Bike" << endl;
        }
    }
    return 0;
}

