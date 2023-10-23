#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n;
    
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    vector<int> result;
    cin >> k;
    
    for (int j = 0; j < k; j++) {
        int min = arr[0]; 
        int minIndex = 0; 

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] < min) {
                min = arr[i];
                minIndex = i;
            }
        }
        
        result.push_back(min);
        arr.erase(arr.begin() + minIndex); 
    }
    
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    
    return 0;
}
