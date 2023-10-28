#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int n, m, d;

    cin >> n >> m >> d;

    vector<int> result;

    for (int i = n; i <= m; i++) {
        if (sqrt(i) - floor(sqrt(i)) == 0) {
            result.push_back(i);
        }
    }

    if(d == 1){
        sort(result.begin(), result.end());
    }
    else{
        sort(result.begin(), result.end(), greater<int>());
    }

     for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    return 0;
}
