#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;

    cin >> n;
    vector <int> arr(n);
    vector <int> result;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    for (int i = 0; i < n; i++)
    {
       
        if (arr[i] % 2 == 0)
        {
            result.push_back(arr[i]);
                
        }
    } 
    for (int i = 0; i < n; i++)
    {
       
        if (arr[i] % 2 != 0)
        {
            result.push_back(arr[i]);
                
        }
    }
    
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }


    
}