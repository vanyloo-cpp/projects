#include <iostream>
#include <string>

using namespace std;

int even(string n) {
    int even_digits = 0;
    for (int i = 0; i < n.size(); i++) {
        if ((n[i] - '0') % 2 == 0) {
            even_digits++;
        }
    }
    return even_digits;
}

int main() {
    string n;
    cin >> n;
    int result = even(n);
    cout << result << endl; 
    return 0;
}
