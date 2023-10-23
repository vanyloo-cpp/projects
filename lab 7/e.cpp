#include <iostream>
#include <cmath>

using namespace std;

bool isPowerOf2(long long n) {
    if (n <= 0) {
        return false; 
    }
    
    double log2n = log2(n);
    return ceil(log2n) == floor(log2n);
}

int main() {
    long long n;
    cin >> n;
    
    if (isPowerOf2(n)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}
