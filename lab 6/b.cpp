#include <iostream>
#include <cmath>

using namespace std;

void difference(int a) {
    int arr[a];
    int arr2[a];

    for (int i = 0; i < a; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < a; i++) {
        cin >> arr2[i];
    }

    for (int i = 0; i < a; i++) {
        cout << abs(arr[i] - arr2[i]) << " ";
    }
}

int main() {
    

        int a;
        cin >> a;
        difference(a);
        cout << endl;  


    return 0; 
}
