#include <iostream>
#include <map>
#include <vector>
#include <set>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    map<int, int> valueCount;
    vector<int> arr;

    int value;
    int cnt = 0;

    cin >> value;

    arr.resize(value);

    for (int i = 0; i < value; i++) {
        cin >> arr[i];
        valueCount[arr[i]]++;
    }

    for (const auto& pair : valueCount) {
        if(pair.second >= 2){
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}
