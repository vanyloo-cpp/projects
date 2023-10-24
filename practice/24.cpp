#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;

    cin >> n;

    vector <int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << arr[n - 1] << " ";
    for (int i = 0; i < n - 1; i++)
    {
        cout << arr[i] << " ";
    }
    
    
}