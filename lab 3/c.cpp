#include <iostream>

using namespace std;

int main(){
    int n;
  

    cin >> n;
    int size = n * n;
    int arr[size];
    

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    int max = arr[0];
    
    for(int i = 1; i < n; i++){
        if (arr[i] < max)
        {
            max = arr[i];
        }
        
    }

    cout << max << endl;
}   