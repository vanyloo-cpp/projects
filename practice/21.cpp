#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;

    cin >> n;

    vector <int> arr(n);
    vector <int> res;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if(arr[i] % 2 != 0){
            res.push_back(arr[i]);
        }
    }
    
    if(res.empty()){
        cout << "0";
    }

    else{
        sort (res.begin(), res.end());

        cout << res[0];
    }

    
    
}

