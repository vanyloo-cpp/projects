#include<iostream>

using namespace std;

int main(){
    int size;
    int pos = 0;

    cin >> size;

    int arr[size];

    for(int i = 0; i < size; i++){
        cin >> arr[i];
        if(arr[i] > 0){
            pos++;
            
        
        }
    }
    cout << pos << endl;
}