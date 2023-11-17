#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> arr;

    for (int i = 0; i < n; i++) {
        string email, res;
        cin >> email;
        res = "";
        
        if (email.find("@gmail.com") != email.npos) {
            int first = email.find_first_of("@");
            res = email.substr(0, first);
            arr.push_back(res);
        }
    }

    
    for (const auto &element : arr) {
        cout << element << endl;
    }

    return 0;
}
