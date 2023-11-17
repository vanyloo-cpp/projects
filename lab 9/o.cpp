#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n;

    unordered_map<string, string> reg;
    vector<string> results;

    for (int i = 0; i < n; i++) {
        string login, password;
        cin >> login >> password;
        reg.insert(make_pair(login, password));
    }

    cin >> m;
    for (int i = 0; i < m; i++) {
        string login, password;
        cin >> login >> password;

        auto it = reg.find(login);

        if (it != reg.end()) {
            const string &correct_password = it->second;

            if (password == correct_password) {
                results.push_back("correct password");
            } else {
                results.push_back("password error");
            }
        } else {
            results.push_back("login error");
        }
    }

    for (const auto &result : results) {
        cout << result << endl;
    }

    return 0;
}
