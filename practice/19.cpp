#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;

    cin >> n;

    vector <int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        if ((arr[i - 1] < 0 && arr[i] < 0) || (arr[i - 1] > 0 && arr[i] > 0))
        {
            if (arr[i - 1] < arr[i])
            {
                cout << arr[i - 1] << " " << arr[i];
                break;
            }
            else{
                cout << arr[i] << " " << arr[i - 1];
                break;
            }
            
        }
        
    }
    
}