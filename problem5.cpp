#include <iostream>

using namespace std;

int main() {

    double num1, num2, result;
    char op;


    cin >> num1;

    cin >> op;

    cin >> num2;

    if (op == '+') {
        result = num1 + num2;
    } else if (op == '-') {
        result = num1 - num2;
    } else if (op == '*') {
        result = num1 * num2;
    } else if (op == '/') {
        if (num2 != 0) {  // Check for division by zero
            result = num1 / num2;
        } else {
            cout << "Error" << endl;
            return 1;
        }
    } else {
        cout << "Error: Invalid operator." << endl;
        return 1;
    }

    cout << result << endl;


    return 0;
}

