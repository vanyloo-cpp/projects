#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;

    cin >> s;

    // Инициализируем min и max начальными значениями из первой цифры строки
    int min = s[0] - '0';
    int max = s[0] - '0';

    for (int i = 0; i < s.size(); i++) {
        int digit = s[i] - '0';

        if (digit > max) {
            max = digit;
        }

        if (digit < min) {
            min = digit;
        }
    }

    cout << max << " " << min;
}
