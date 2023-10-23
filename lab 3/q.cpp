#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;

    if (x <= 1) {
        cout << "No" << endl; 
    } 
    else {
        int i;
        for (i = 2; i * i <= x; ++i) {
            if (x % i == 0) {
                cout << "No" << endl;
                break;
            }
        }

        if (i * i > x) {
            cout << "Yes" << endl;
        }
    }

    return 0;
}
