#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, cnt;
    cnt = 0;

    cin >> n;

    vector <int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    sort(arr.begin(), arr.end());
    
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                break;
            }
            
            if (arr[j] == arr[i])
            {
                cnt++;
            }
            
        }
        
    }
    cout << cnt;
}