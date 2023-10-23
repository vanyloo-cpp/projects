#include<iostream>

using namespace std;

int main(){
    int size;
    long long sum = 0;

    cin >> size;

    int arr[size];

    for(int i = 0; i < size; i++){
        cin >> arr[i];
        sum += arr[i];
        
    }
    cout << sum << endl;
}