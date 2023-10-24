#include <iostream>
#include <string>

using namespace std;

int main() {
    int h;
    char s = '^';
    char space = ' ';

    cout << "Input height: ";
    cin >> h;

    for (int i = 0; i < h; i++) {
        // Print spaces before '^' characters
        for (int j = 0; j < h - i - 1; j++) {
            cout << space;
        }

        // Print '^' characters
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << s;
        }

        cout << endl;
    }

    return 0;
}
