#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int count[10] = {0}; 

    for (size_t i = 0; i < s.length(); ++i) {
        char c = s[i];
        if (isdigit(c)) {
            int digit = c - '0'; 
            count[digit]++;
        }
    }

    bool equalAmount = true;
    for (int i = 0; i < 10; i++) {
        if (count[i] != 0 && count[i] != count[s[0] - '0']) {
            equalAmount = false;
            break;
        }
    }

    if (equalAmount) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
