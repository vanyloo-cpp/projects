#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n;

    cin >> n;
    string arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    multiset<string> contacts(arr, arr + n);
    vector<string> numbers;
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        if (i == 0 || arr[i] != arr[i - 1]) {
            numbers.push_back(arr[i]);
        }
    }

    for (int i = 0; i < numbers.size(); i++) {
        if (contacts.count(numbers[i]) == 3) {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}
