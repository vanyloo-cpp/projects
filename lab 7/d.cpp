#include <iostream>
#include <string>

using namespace std;

int sum(string n) {
    int sum_element = 0;

    for (int i = 0; i < n.size(); i++) {
        sum_element += (n[i] - '0');
    }

    return sum_element;
}

int main() {
    string n;
    cin >> n;

    int result = sum(n);

    cout << result << endl;

    return 0;
}
