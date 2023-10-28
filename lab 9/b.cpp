#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, cnt;
    cnt = 0;

    cin >> n;

    vector<int> arr(n);
    vector<int> result;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        if (arr[i] % 2 == 0) {
            result.push_back(arr[i]);
            cnt++;
        }
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0)
        {
            result.push_back(arr[i]);
        }
        
    }

    sort(result.begin(), result.begin() + cnt, greater<int>());
    sort(result.begin() + cnt, result.end());

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}
