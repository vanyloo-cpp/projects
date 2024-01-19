/*
input
4
inc
6 3 3 7
3 2 1 3
2 8 10 1
1 9 5 5

output
1 2 1 1
2 3 3 3
3 8 5 5
6 9 10 7

1 12 17 22
2 13 18 23
3 14 19 24
4 15 20 25
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n;

    cin >> n;

    vector <vector<int>> arr(n,vector<int>(n));

    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j][i];
        }
        
    }

    string sorting;

    cin >> sorting;

    if(sorting == "inc"){
       for(int i = 0; i < n; i++){
        sort(arr[i].begin(),arr[i].end());
       }
    }

    else{
        for(int i = 0; i < n; i++){
            sort(arr[i].rbegin(), arr[i].rend());
        }
    }

    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
        
    }

    return 0;
}