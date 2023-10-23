#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s, reversed;

    cin >> s;

    reversed = s;

    reverse(s.begin(), s.end());

    if(s == reversed){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}
