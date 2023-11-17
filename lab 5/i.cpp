#include <iostream>
#include <unordered_set>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_set<string> userSet;
    vector <string> result;

    for (int i = 0; i < n; ++i) {
        string login;
        cin >> login;

        auto ffind = userSet.insert(login);

        if (ffind.second) {
            result.push_back("new user added");
        } else {
            result.push_back("user already exists");
        }
    }

    for(auto &element : result){
        cout << element << endl;
        
    }
    return 0;
}
