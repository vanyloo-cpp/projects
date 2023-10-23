#include <iostream>

using namespace std;

int main(){
    int n;
    
    cin >> n;

    int a[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    
    int max = a[0][0];
    int index = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i][i] > max) {
            max = a[i][i];
            index = i;
        }
    }
    
    cout << "Maximum element is: " << max << " with coordinates:" << " " << index + 1 << ";" << index + 1 << endl;
    return 0; 
}
