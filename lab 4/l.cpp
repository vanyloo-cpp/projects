#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int a[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    int columnSums[m] = {0};  
    int index1 = 0;
    int index2 = 0;
    cout << "coordinates of min elements: " << endl;
    for (int j = 0; j < m; j++) {
        int min = a[0][j];  
        for (int i = 0; i < n; i++) {
            if (a[i][j] < min) {
                min = a[i][j];
                index1 = i;
                index2 = j;
            }
        }
        columnSums[j] += min;
        cout << index1 + 1 <<";"<<index2 + 1 << endl;;
    }
    int sum_min = 0;
    for (int j = 0; j < m; j++) {
        sum_min += columnSums[j];      
    }
    cout << " " << endl;
    cout << "Their sum:" << endl;
    cout << sum_min;
    return 0;
}
