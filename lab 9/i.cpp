#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int n;

    cin >> n;

    vector <string> arr(n);
    vector <string> result;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; i++)
        {
            if(arr[i] == arr[j]){
                result.push_back(arr[i]);
            }
        
        }    
    }
    
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }
    

}