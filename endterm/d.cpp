#include <iostream>
#include <string>
using namespace std;
int main() {
    string s, str;
    cin >> s >> str;
    for (int i = 0; i < s.size() - str.size() + 1; i++) {
        string str2 = s.substr(i, str.size());
        if (str2 == str) {
            cout << i << " ";
        }
    }
    return 0;
}