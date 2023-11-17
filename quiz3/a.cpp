#include <iostream>
#include <string>
#include <vector>

using namespace std;

void isTruth(string s) {
    vector<string> res;
    string word = "";

    for (int i = 0; i < s.size(); i++) {
        if (isalpha(s[i])) {
            word += s[i];
        }

        if (s[i] == ' ') {
            res.push_back(word);
            word = "";
        }

        if (isdigit(s[i])) {
            word = "";
            for (int j = i; j < s.size(); j++)
            {
                if (s[j] == ' ')
                {
                    word = "";
                    i = j;
                    break;
                }
                
            }
            
        }
    }

    if (!word.empty()) {
        res.push_back(word);
    }

    for (auto it : res) {
        cout << it << endl;
    }
}

int main() {
    string s;
    getline(cin, s);

    isTruth(s);

    return 0;
}
