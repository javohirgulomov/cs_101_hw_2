#include <iostream>

using namespace std;

int main() {

   long int a;
   cin >> a;
    if (a>-2147483647 && a<2147483647) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}

