#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, temp = 1;
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));

    int top = 0, bottom = n - 1, l = 0, r = n - 1;
    while (temp <= n * n) {
        for (int i = l; i <= r; i++) {
            matrix[top][i] = temp++;
        }
        top++;

        for (int i = top; i <= bottom; i++) {
            matrix[i][r] = temp++;
        }
        r--;

        for (int i = r; i >= l; i--) {
            matrix[bottom][i] = temp++;
        }
        bottom--;

        for (int i = bottom; i >= top; i--) {
            matrix[i][l] = temp++;
        }
        l++;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}