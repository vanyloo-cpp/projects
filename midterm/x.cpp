#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        // Print leading spaces
        for (int j = 0; j <= N - i; j++) {
            cout << ' ';
        }

        // Print asterisks
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << '*';
        }

        cout << endl;
    }

    return 0;
}
