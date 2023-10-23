#include <iostream>
#include <string>

using namespace std;

int sum(string n) {
    int sumelement = 0;

    for (int i = 0; i < n.size(); i++) {
        sumelement += (n[i] - '0');
    }

    return sumelement;
}

int main() {
    string n;
    cin >> n;

    int result = sum(n);

    cout << result << endl;

    return 0;
}
