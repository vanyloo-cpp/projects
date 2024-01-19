#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, m;

    cin >> n >> m;

    vector<vector <int>> arr(n, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
        
    }
    
    for (int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - 1; j++){
            if(arr[i][j] == arr[i + 1][j] && arr[i][j] == arr[i][j + 1] && arr[i][j] == arr[i + 1][j + 1]){
                cout << "NO";
                return 0;
            }
        }
    }

    cout << "YES";
    

}
