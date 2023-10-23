#include<iostream>

using namespace std;

int main(){
    int size;
    int square = 0;

    cin >> size;

    int arr[size];

    for(int i = 0; i < size; i++){
        cin >> arr[i];
        square = arr[i] * arr[i];
        cout << square << " ";
    
    }
    cout << endl;
}
