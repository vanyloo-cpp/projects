#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, z;

    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> z;

    vector<int> res(n);

    for (int i = 0; i < n; i++) {
        res[i] = arr[(i - z + n) % n];
    }

    for (int i = 0; i < n; i++) {
        cout << res[i] << " ";
    }

    return 0;
}
