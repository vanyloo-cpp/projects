#include <iostream>
#include <ctime>
 
using namespace std;
 
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    int sum_row[n] = { 0 };
    int sum_column[m] = { 0 };
    for (int i = 0; i < n; i++) {   
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            sum_row[i] += a[i][j];
            sum_column[j] += a[i][j];
        }
    } 
    
    
    
    for (int i = 0; i < n; i++) {
        cout << "The sum of row number " << i + 1 << " is" <<" " << sum_row[i] << endl;;
    }
    
    
    for (int j = 0; j < m; j++) {
        cout << "The sum of column number " << j + 1 << " is" <<" " << sum_column[j] << endl;
    }
    
    return 0;
}
