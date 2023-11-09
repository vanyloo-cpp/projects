#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    map<string, string> reg;

    for (int i = 0; i < n; i++) {
        string login, password;
        cin >> login >> password;
        reg.insert(make_pair(login, password));
    }

    for (int i = 0; i < m; i++) {
        string login, password;
        cin >> login >> password;

        auto it = reg.find(login);

        if (it != reg.end()) {
            const string &correct_password = it->second;

            if (password == correct_password) {
                cout << "correct password";
            } else {
                cout << "password error";
            }
        } else {
            cout << "login error";
        }

        cout << endl;
    }

    return 0;
}
