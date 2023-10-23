#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int odd_sum = 0;
    int even_sum = 0;

    for (int i = 0; i < s.length(); i++) {
        int digit = s[i] - '0';
        if ((i + 1) % 2 == 0) {
            even_sum += digit;
        } else {
            odd_sum += digit;
        }
    }

    if (odd_sum == even_sum) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
