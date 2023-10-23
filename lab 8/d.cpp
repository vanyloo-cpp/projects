#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;

    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        
    }
    cin >> k;
    for (int i = 0; i < n; i++) {
            if (i == k) {
                arr.erase(arr.begin() + k);
            }
        }

    n = arr.size();

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
