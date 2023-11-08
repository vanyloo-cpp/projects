#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, m;

    cin >> n >> m;
    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
        
    }
    

    vector <int> res;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += arr[i][j];
        }
        res.push_back(sum);
    }
    
    sort(res.begin(), res.end(), greater<int>());

    cout << res[0];
    
    
}