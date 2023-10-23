#include <iostream>

using namespace std;

int main() {
    int n, pos1, pos2;

    cin >> n;

    int arr[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int nmax = arr[0][0];
    pos1 = 0;
    pos2 = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] > nmax) {
                nmax = arr[i][j];
                pos1 = i;
                pos2 = j;
            }
        }
    }

    cout << pos1 + 1 << " " << pos2 + 1 << endl; 
}
