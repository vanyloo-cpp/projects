#include <iostream>
#include <climits>

using namespace std;

int main() {
    int n, max;
    
    max = INT_MIN;

    int arr[4];

    for (int i = 0; i < 4; i++) {
        cin >> arr[i];
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    cout <<  max << endl;

    return 0;
}
