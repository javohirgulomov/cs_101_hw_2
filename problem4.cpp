#include <iostream>

using namespace std;

int main() {

    int n1, n2, n3, n4;
    int modificationsNeeded = 0;

    cin >> n1 >> n2 >> n3 >> n4;

    if (n1 == n2) modificationsNeeded++;
    if (n1 == n3) modificationsNeeded++;
    if (n1 == n4) modificationsNeeded++;

    if (n2 == n3 && n1 != n3) modificationsNeeded++;
    if (n2 == n4 && n1 != n4) modificationsNeeded++;

    if (n3 == n4 && n1 != n4 && n2 != n4) modificationsNeeded++;

    cout << modificationsNeeded << endl;


    return 0;
}

