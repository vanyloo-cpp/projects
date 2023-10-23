#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, c;

    cin >> s;

    
    

    c = s[0];  

    for (int i = 1; i < s.size(); i++) { 
        if (s[i] > c[0]) { 
            c = s[i]; 
        }
    }

    cout << c << endl;

    return 0;
}
