#include <iostream>
#include <algorithm>

using namespace std;

int same() {
    int n, cnt = 0;
    cin >> n;

    int arr[n];
    int arr2[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }

    sort(arr, arr + n);
    sort(arr2, arr2 + n);

    int i = 0, j = 0;

    while (i < n && j < n) {
        if (arr[i] == arr2[j]) {
            cnt++;
            i++;
            j++;
        } else if (arr[i] < arr2[j]) {
            i++;
        } else {
            j++;
        }
    }

    return cnt;
}

int main() {
    cout << same() << endl;
}
