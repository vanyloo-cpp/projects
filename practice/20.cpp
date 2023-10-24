#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, min;

    cin >> n;

    vector <int> arr(n);
    vector <int> res;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        
        if (arr[i] > 0)
        {
            res.push_back(arr[i]);
        }
        
    }

    min = res[0];

    for (int i = 0; i < res.size(); i++)
    {
        if (min > res[i])
        {
            min = res[i];
        }
        
    }
    
    cout << min;
}