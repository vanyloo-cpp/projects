#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    string s;
    cin >> s;

    map<char, int> letterCount;

    char maxLetter = s[0];
    int maxCount = 1;

    for (char c : s) {
        letterCount[c]++;
        if (letterCount[c] > maxCount) {
            maxCount = letterCount[c];
            maxLetter = c;
        }
    }

    cout << maxLetter << " " << maxCount << endl;

    return 0;
}
