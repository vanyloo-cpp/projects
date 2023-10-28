#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;

    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
        
    }
    vector <int> result;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for(int j = 0; j < m; j++){
            sum += arr[i][j];
        }
        int res = sum / m;
        result.push_back(res);
    }
    
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    
}