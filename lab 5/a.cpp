#include <iostream>
#include <string>

using namespace std;

int main() {
    string a;
    cin >> a;

    int capital = 0;
    int small = 0;

    for (int i = 0; i < a.length(); i++) {
        if (isupper(a[i]))
            capital++;
        else
            small++;
    }
    
    cout << small << " " << capital << endl;

    return 0;
}
