#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, cnt;
    cnt = 1;

    cin >> n;

    vector <int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1 ] != arr[i])
        {
            cnt++;
        }
        
    }
    
    cout << cnt;
    
}