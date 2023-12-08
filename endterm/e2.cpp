#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip> // for std::setw

int main() {
    int n;
    std::cin >> n;

    std::vector<std::vector<int>> dates(n, std::vector<int>(3));

    for (int i = 0; i < n; ++i) {
        std::cin >> dates[i][0] >> dates[i][1] >> dates[i][2];
    }

    std::sort(dates.rbegin(), dates.rend(), [](const auto& a, const auto& b) {
        if (a[2] != b[2]) {
            return a[2] < b[2];
        }
        if (a[1] != b[1]) {
            return a[1] < b[1];
        }
        return a[0] < b[0];
    });

    for (const auto& date : dates) {
        std::cout << std::setw(2) << std::setfill('0') << date[0] << '-'
                  << std::setw(2) << std::setfill('0') << date[1] << '-'
                  << date[2] << std::endl;
    }

    return 0;
}
