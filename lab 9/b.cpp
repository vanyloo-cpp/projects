#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, cnt;
    cnt = 0;

    cin >> n;
    vector <int> arr(n);

    if (n == 1)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << "0";
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
       cin >> arr[i];
    }

    

    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            cnt++;
        }
        if (arr[i + 1] == arr[i + 2])
        {
            continue;
        }
        
        
    }
    
    cout << cnt;
}