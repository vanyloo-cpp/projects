#include <iostream>
using namespace std;

string valid(string s, int n) {
    int valid_numbers = 0;

    for (int i = 0; i < s.size(); i++) {
        if (isdigit(s[i])) {
            valid_numbers++;
            if (valid_numbers >= n) {
                return "Valid";
            }
        } else {
            valid_numbers = 0;
        }
    }

    return "Not valid";
}

int main() {
    string s;
    int n;
    cin >> s >> n;
    
    string result = valid(s, n);
    cout << result << endl;
    return 0;
}
