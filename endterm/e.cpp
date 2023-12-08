#include <iostream>
#include <string>
#include <set>
using namespace std;

bool isunique(int n) {
    string str = to_string(n);
    set<char> Myset(str.begin(), str.end());
    if (str.length() == Myset.size()) {
        return true;
    } else {
        return false;
    }
}


int main() {
    int n;
    cin >> n;
    while(!(isunique(++n))) {

    }
    cout << n;
    return 0;
}