#include <iostream>
#include <string>

using namespace std;

string ticket(string s) {
    int lucky = 0;
    string result = "No";

    for (int i = 0; i < s.size(); i++) {
        lucky += s[i] - '0';
    }
    if (s.size() > 0) {
        int last_digit = s[s.size() - 1] - '0';
        if (last_digit != 0 && lucky % last_digit == 0) {
            result = "Yes";
        }
    }

    return result;
} 

int main() {
    string s;

    cin >> s;
    
    cout << ticket(s) << endl;  
}
