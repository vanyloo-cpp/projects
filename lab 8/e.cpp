#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, a, b;

    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        
    }
    cin >> a >> b;
   
    arr.erase(arr.begin() + a, arr.begin() + b + 1);
          
    n = arr.size();

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
