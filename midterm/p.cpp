#include <iostream>
using namespace std;

int main(){
    int n, sum;

    cin >> n;
    int arr[n];
    sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    
    cout << sum;


}