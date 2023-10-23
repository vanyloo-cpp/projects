#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;

    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> result; 

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            bool isDuplicate = false;

            for (int j = 0; j < result.size(); j++) {
                if (result[j] == arr[i]) {
                    isDuplicate = true;
                    break;
                }
            }

            if (!isDuplicate) {
                result.push_back(arr[i]);
            }
        }
    }

    sort(result.begin(), result.end());

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}
