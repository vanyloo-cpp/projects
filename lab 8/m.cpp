#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    int sum = 0;

    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> result;

    for (int i = 0; i < n; i++) {
        bool isUnique = true;
        for (int j = 0; j < result.size(); j++) {
            if (result[j] == arr[i]) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            result.push_back(arr[i]);
        }
    }

    for (int i = 0; i < result.size(); i++)
    {
        sum += result[i];
    }
    
    cout << sum;
    
    return 0;
}
