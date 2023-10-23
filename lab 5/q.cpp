#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    int s_len = s.size();
    int t_len = t.size();
    
    if (t_len % s_len != 0) {
        cout << "NO" << endl;
        return 0;
    }

    string repeated_s = "";
    while (repeated_s.size() < t_len) {
        repeated_s += s;
    }

    if (repeated_s == t) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
