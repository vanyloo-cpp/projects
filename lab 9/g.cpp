#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    cin >> input;

    string result;

    for (size_t i = 0; i < input.size(); ++i) {
        if (input[i] == '1') {
            if (i + 1 < input.size() && input[i + 1] == '1') {
                ++i;
            } else {
                result += '1';
            }
        } else {
            result += '0';
        }
    }

    cout << result << endl;

    return 0;
}
