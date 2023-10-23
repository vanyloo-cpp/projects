#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    bool isSorted = true;

    for (int i = 1; i < s.size(); i++) {
        if (s[i - 1] > s[i]) {
            isSorted = false;
            break;
        }
    }

    if (isSorted) {
        cout << "YES" << endl;
    } 
    else {
        cout << "NO " << endl; 
    }

    return 0;
}
