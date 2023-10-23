#include <iostream>
using namespace std;

int main() {
    int n, i, j, value;
    int num = 0;
    cin >> n >> value;
    int arr[n];

    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (i = 0; i < n; i++) {
        if (arr[i] < value) {
            num = i + 1;
        }
    }
    cout << num;
}