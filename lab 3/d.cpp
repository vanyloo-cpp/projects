#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int maxElement = arr[0]; 
    int maxPosition = 1;    
    
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
            maxPosition = i + 1; 
        } else if (arr[i] == maxElement) {
            
            maxPosition = 1;
        }
    }
    
    cout << maxPosition << endl; 
    
    return 0;
}
