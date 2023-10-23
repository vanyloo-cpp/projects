#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int size;

    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        
    }
    sort(arr, arr + size); 

    for (int i = 0, j = size - 1; i < j; ++i, --j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
        
    }
    cout << endl;
}