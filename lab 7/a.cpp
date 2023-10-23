#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    if (n >= 0 && n <= 30) {
        
        long long result = static_cast<long long>(pow(2, n));
        cout << result << endl;
    } 
    return 0;
}
