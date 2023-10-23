#include <iostream>

using namespace std;

int main(){
    int n;
    int seven = 0;
  

    cin >> n;

    int arr[n];
    

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] % 10 == 7){
            seven++;
        }
    }

    cout << seven << endl;
} 