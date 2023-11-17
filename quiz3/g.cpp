#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string s;
    int n;
    
    getline(cin, s);
    cin >> n;

    vector <string> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < s.size(); j++)
        {
            if(s[j] == arr[i][0]){
                cnt++;
            }
        }
        cout << arr[i] << " - " << cnt << endl;
        
    }
    
    
}