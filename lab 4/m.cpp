#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n][n];
    int digits = 0;

    for (int i = 0; i < n; i++)
    {
        arr[i][0] = digits + 1;
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = n - 1; j != 0; j--)
        {
            arr[i][j] = digits + 1;
            break;
        }
        
    }

    for (int i = 0; i < n; i++)
    {
            
        for (int j = 0; i < n; j++)
        {
            cout << arr[i][j];
        }
        
    
        
    }
    
    
    
    
}