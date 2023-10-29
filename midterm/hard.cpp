#include <iostream>
#include <string>

using namespace std;


int main() {

    int n;
    cin >> n;
    int a[n][n];

    for (int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }


    for (int x = 0; x < n; ++x) {
        for (int y = 0; y < n; ++y) {

            if(a[x][y] != a[y][x]) {
                cout << "Not Perfect!";
                return -1;
            }
        }
    }

    cout << "Perfect!";
}
