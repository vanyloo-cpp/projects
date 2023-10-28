#include <iostream>
#include <string>

using namespace std;

int main() {
    string number;
    cin >> number;

    int firstDigit = number[0] - '0';
    int sumOfOtherDigits = 0;

    for (int i = 1; i < number.length(); i++) {
        sumOfOtherDigits += (number[i] - '0'); 
    }

    if (firstDigit == (sumOfOtherDigits % 10)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
