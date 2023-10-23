#include <iostream>
using namespace std;

bool isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    string s;
    getline(cin, s);
    
    for (int i = 0; i < s.size(); i++) {  
        if (!isVowel(s[i])) {
            cout << s[i];
        }
    }

    return 0;
}