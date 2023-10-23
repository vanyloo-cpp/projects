#include <iostream>
#include <algorithm>

using namespace std;

int arr_reverse() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    reverse(arr, arr + n);
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    
}

int main(){


    arr_reverse();
}