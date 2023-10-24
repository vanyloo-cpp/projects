#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;

    cin >> n;

    vector <int> arr(n);
    vector <int> res;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    for (int i = 1; i < n; i+=2)
    {
        res.push_back(arr[i]);
        res.push_back(arr[i - 1]);
    }
    
    if (n % 2 != 0)
    {
        res.push_back(arr[n - 1]);
    }
    
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    
}