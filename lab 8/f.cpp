#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, a, k;

    cin >> n;

    vector <int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin >> a >> k;
    arr.insert(arr.begin() + a, k);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    
}