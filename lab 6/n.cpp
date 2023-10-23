#include <iostream>

using namespace std;

void transpose() {
    int n, m;

    cin >> n >> m;

    int arr[n][m];
    int new_arr[m][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            new_arr[j][i] = arr[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << new_arr[i][j] << " ";
        }
        cout << endl; 
    }
}

int main() {
    transpose();
    return 0; 
} 
