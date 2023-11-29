#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    int n;

    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int count = 0;
    set<int> uniqueValues(arr.begin(), arr.end());

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int xorResult = arr[i] ^ arr[j];
            if (uniqueValues.find(xorResult) != uniqueValues.end()) {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}
