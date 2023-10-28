#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;

    cin >> n;
    vector<vector<int> > arr(n, vector<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    vector<int> res;

    for (int i = 0; i < n; i++) {
        int max = arr[i][0]; // Используйте arr[i][0] в качестве начального значения
        int j;

        for (j = 0; j < n; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }

        res.push_back(max);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << res[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
