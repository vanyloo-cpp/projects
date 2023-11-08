#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main() {
    string n, res;
    res = "";
    cin >> n;

    for (int i = n.size() - 1; i >= 0; i--) {
        res += n[i];
    }

    int reversedNumber = stoi(res);
    int result = reversedNumber * 2;

    cout << result;
}
