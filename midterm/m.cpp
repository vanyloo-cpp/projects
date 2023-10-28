#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long int a, b;
    cin >> a >> b;

    for (int i = -60; i < b; i++) {
        if (static_cast<long long>(a * pow(2, i)) == b) {
            cout << "YES " << i;
            return 0;
        }
    }

    cout << "NO";
}
