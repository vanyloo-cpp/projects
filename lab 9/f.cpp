#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;

    cin >> s;
    if (s.size() % 2 != 0) {
        cout << "NO";
    } else {
        int cnt = 0;  

        for (char c : s) {
            if (c == '(') {
                cnt++;
            } else if (c == ')') {
                cnt--;
            }

            if (cnt < 0) {
                break;
            }
        }

        if (cnt == 0 ) {
            cout << "YES";
        } else {
            cout << "NO";
        }
    }

    return 0;
}
