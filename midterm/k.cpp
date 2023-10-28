#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, t, cnt;
    cnt = 0;
    
    cin >> n;
    vector <int> arr(n);
    vector <int> arr2(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    cin >> t;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] <= t && t <= arr2[i])
        {
            cnt++;  
        }
        
    }
    cout << cnt;
}