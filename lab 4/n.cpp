#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;
    for(int i = 2; i < x; i++){
        int j;
        for (j = 2; j * j <= i; ++j) {
            if (i % j == 0) {
                break;
            }
        }

            if (j * j > i) {
            cout << i << " " "is prime" << endl;
            }
    
    }
    return 0;
}
