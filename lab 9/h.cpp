#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    int n;
    string s;

    cin >> n;

    unordered_map<string, int> arr;

    for (int i = 1; i <= n; i++) {
        cin >> s;
        arr.insert(make_pair(s, i));
    }

    vector<pair<string, int>> vec(arr.begin(), arr.end());
    sort(vec.begin(), vec.end());

    set <pair<string, int>> result(vec.begin(), vec.end());

    for (auto &element:result )
    {
        cout << element.first << " " << element.second << endl;
    }
    

    return 0;
}
