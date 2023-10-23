#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    int n, k, remainder;
    remainder = 0;
    string result = "";
    char letter = 'A';
    cin >> n >> k;

    while (n > 0) {
        remainder = n % k;
        if (remainder >= 10) {
            remainder -= 10;
            letter = 'A' + remainder;
            result = letter + result;
        } else {
            stringstream ss;
            ss << remainder;
            result = ss.str() + result;
        }
        n /= k;
    }
    cout << result << endl;
    return 0;
}
