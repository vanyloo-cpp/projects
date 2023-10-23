#include <iostream>

using namespace std;

int main() {
    int n; 
    int zero = 0; // Счетчик нулей

    cin >> n;

    
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        
        
        while (num > 0) {
            if (num % 10 == 0) {
                zero++;
            }
            num /= 10;
        }
    }

    cout << zero << endl;

    return 0;
}