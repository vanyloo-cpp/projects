#include <iostream>
#include <string>

using namespace std;

string tasty(string s) {
    string res = "";
    int sum = 0;
    for (int i = 0; i < s.size(); i++) {
        sum += s[i] - '0';
    }
    if (sum > 300) {
        res = "It is tasty!";
    } else {
        res = "Oh, no!";
    }
    return res;
}

int main() {
    string s;
    getline(cin, s);
    cout << tasty(s) << endl;

    return 0;
}
