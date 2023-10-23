#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++) {
        cout << i << " ";
        for (int j = 1; j < n; j++) {

            if(i != 0){
                cout << i * j << " ";
            }
            else{
                cout << j << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
