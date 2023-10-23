#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s, reversed;
    cin >> s;

    reversed = s; 
    reversed += s[0]; 
    s += s[0];
    reverse(reversed.begin(), reversed.end()); 


    if (s == reversed) {
        cout << "YES";
    } else {
        cout << "NO ";
    }
    return 0;
}
