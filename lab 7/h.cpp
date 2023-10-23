#include <iostream>

using namespace std;

int main(){
    int n;
    int value = 0;
    
    cin >> n;

    int arr[n];

    if(n == 1){
        cout << "0";
        return 0;
    }
    if(n >= 2){
        arr[0] = 0;
        arr[1] = 1;
        for (int i = 1; i < n; i++)
        {
            arr[i + 1] = arr[i] + arr[i - 1];
            
        }
    }
    cout << arr[n - 1];
}

