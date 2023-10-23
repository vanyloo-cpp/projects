#include <iostream>
#include <string>
#include <sstream>  

using namespace std;

int main() {
    int n;
    string result = "";

    cin >> n;

    if (n == 1) {
        cout << "1";
    } else {
        while (n > 0) {
            int remainder = n % 2;
            stringstream ss;
            ss << remainder;
            result = ss.str() + result;
            n /= 2;
        }
        cout << result;
    }

    return 0;
}
