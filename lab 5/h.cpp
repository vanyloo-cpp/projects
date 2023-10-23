#include <iostream>
#include <string>
#include <unordered_map>



bool isDigitCountEqual(const std::string &s) {
    std::unordered_map<char, int> digitCount;

    for (char digit : s) {
        if (isdigit(digit)) {
            digitCount[digit]++;
        }
    }

    int firstCount = 0;
    bool firstCountSet = false;

    for (const auto &entry : digitCount) {
        if (!firstCountSet) {
            firstCount = entry.second;
            firstCountSet = true;
        } else if (entry.second != firstCount) {
            return false;
        }
    }

    return true;
}

int main() {
    std::string s;
    std::cin >> s;

    if (isDigitCountEqual(s)) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
