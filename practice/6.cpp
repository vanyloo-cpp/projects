#include <iostream>

using namespace std;

int main() {
    long long int n;
    cin >> n;

    if (n <= 1) {
        cout << "composite" << endl; 
    } 
    else {
        int i;
        for (i = 2; i * i <= n; ++i) {
            if (n % i == 0) {
                cout << "composite" << endl;
                break;
            }
        }

        if (i * i > n) {
            cout << "prime" << endl;
        }
    }

    return 0;
}
