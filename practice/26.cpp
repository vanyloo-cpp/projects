#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    vector<int> uniqueElements;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        bool isUnique = true;

        for (int j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }

        if (isUnique) {
            uniqueElements.push_back(arr[i]);
        }
    }

    for (int i = 0; i < uniqueElements.size(); i++) {
        cout << uniqueElements[i] << " ";
    }

    return 0;
}
