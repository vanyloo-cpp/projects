#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    map<char, int> sMap, tMap;

    for (size_t i = 0; i < s.length(); ++i) {
        sMap[s[i]]++;
    }

    for (size_t i = 0; i < t.length(); ++i) {
        tMap[t[i]]++;
    }

    if (sMap == tMap) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
