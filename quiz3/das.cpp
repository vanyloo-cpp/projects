#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;

    cin >> n;

    vector<vector<int>> arr(n, vector<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    cout << endl;
    for (int i = 0; i < n; i++) {
        for (int j = n - 1; j >= 0; j--) {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}
