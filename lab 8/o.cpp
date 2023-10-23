#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s;
    string result = "";

    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        if (isalpha(s[i])) {
            char lowerChar = tolower(s[i]);
            if (result.find(lowerChar) == string::npos) {
                result += lowerChar;
            }
        }
    }
    sort(result.begin(), result.end());
    cout << result.size() << endl;
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}
