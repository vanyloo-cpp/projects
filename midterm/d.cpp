#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> numbers(n);

    for (int i = 0; i < n; i++) {
        std::cin >> numbers[i];
    }

    std::sort(numbers.begin(), numbers.end());

    int maxFrequency = 0;
    int currentFrequency = 1;

    for (int i = 1; i < n; i++) {
        if (numbers[i] == numbers[i - 1]) {
            currentFrequency++;
        } else {
            currentFrequency = 1;
        }

        if (currentFrequency > maxFrequency) {
            maxFrequency = currentFrequency;
        }
    }

    currentFrequency = 1;

    for (int i = 1; i < n; i++) {
        if (numbers[i] == numbers[i - 1]) {
            currentFrequency++;
        } else {
            currentFrequency = 1;
        }

        if (currentFrequency == maxFrequency) {
            std::cout << numbers[i] << " ";
        }
    }

    return 0;
}
