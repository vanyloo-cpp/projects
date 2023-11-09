#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    int n;
    string login, password;
    cin >> n;

    map<string, string> reg;

    for (int i = 0; i < n; i++) {
        cin >> login >> password;
        reg.insert(make_pair(login, password));
    }

    int m;
    cin >> m;

    multimap<string, string> sign_in;

    for (int i = 0; i < m; i++) {
        cin >> login >> password;
        sign_in.insert(make_pair(login, password));
    }

    for (const auto &pair : reg) {
        const string &login_correct = pair.first;
        const string &password_correct = pair.second;

        auto it = sign_in.find(login_correct);

        if (it != sign_in.end()) {
            const string &it2 = it->second;

            if (password_correct == it2) {
                cout << "password correct";
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
