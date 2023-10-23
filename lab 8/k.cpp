#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k, sum;
    sum = 0;

    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    vector<int> result;
    cin >> k;
    
    for (int j = 0; j < k; j++) {
        int max = arr[0]; 
        int maxIndex = 0; 

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] > max) {
                max = arr[i];
                maxIndex = i;
            }
        }
        
        result.push_back(max);
        arr.erase(arr.begin() + maxIndex); 
    }
    
    for (int i = 0; i < result.size(); i++) {
        sum += result[i];
    }
    
    cout << sum;

    return 0;
}
