#include <iostream>
#include <string>

using namespace std;

string valid(string s, int n) {
    string result = "NO";
    int numbers = 0;

    for (int i = 0; i < s.size(); i++) {
        if (isdigit(s[i])) {  
            numbers++;
        }
    }

    if (numbers >= n) {
        result = "YES";
    }

    return result;
}

int main() {
    string s;
    int n;

    cin >> s >> n;

    cout << valid(s, n) << endl;  

    return 0;
}
