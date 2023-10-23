#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s, s2;

    cin >> s;

    s2 = s;

    reverse(s.begin(), s.end());

    if(s == s2){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}
