#include <iostream>
#include <string>

using namespace std;

string strToBool(string s) {
    string res = "";

    if (s.size() == 1) {
        if (s[0] == '1') {
            res = "true";
        }
        else{
            res = "false";
        }
    }
    else {
        res = s;
    }

    return res;
}

int main() {
    string s;
    cin >> s;

    cout << strToBool(s) << endl;

    return 0;
}
