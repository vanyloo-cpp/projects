#include <iostream>
#include <map>

using namespace std;

int main() {
    int n;

    cin >> n;

    map<string, string> map1;

    for (int i = 0; i < n; i++) {
        string login, password;
        cin >> login >> password;
        map1[login] = password;
    }

    cin >> n;
    map<string, string> map2;

    for (int i = 0; i < n; i++) {
        string login, password;
        cin >> login >> password;
        map2[login] = password;
    }

    for (auto &it : map1) {
        if (map2.find(it.first) == map2.end()) {
            cout << "login error" << endl;
        } else {
            if (it.second != map2[it.first]) {
                cout << "password error" << endl;
            } else {
                cout << "correct password" << endl;
            }
        }
    }

    return 0;
}
