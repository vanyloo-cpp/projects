#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }
    for (int j = 2; j * j <= number; j++) {
        if (number % j == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n, k, cnt;
    cnt = 0;

    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> k;

    for (int i = 0; i < n; i++) {
        if (arr[i] >= k && isPrime(arr[i])) {
            cnt++;
        }
    }

    cout << cnt;
}
