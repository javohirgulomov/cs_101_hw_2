#include <iostream>

using namespace std;

int main() {

    char a;
    float b;
    cin >> a >> b;
    if (a == 'M' && b < 1.70) {
        cout << "Short";
    } else if (a == 'M' && b >= 1.70 && b < 1.85) {
        cout << "Normal";
    } else if (a == 'M' && b >= 1.85) {
        cout << "Tall";
    } else if (a == 'F' && b < 1.60) {
        cout << "Short";
    } else if (a == 'F' && b >= 1.60 && b < 1.75) {
        cout << "Normal";
    } else if (a == 'F' && b >= 1.75) {
        cout << "Tall";
    } else {
        cout << "Error";
    }

    return 0;
}

