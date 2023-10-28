#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;

    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max1 = max(arr[0], arr[1]);  // Находим два максимальных элемента в начале массива
    int max2 = min(arr[0], arr[1]);

    for (int i = 2; i < arr.size(); i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2) {
            max2 = arr[i];
        }
    }

    cout << (long long)max1 * max2;  // Используем long long, чтобы избежать переполнения
}
