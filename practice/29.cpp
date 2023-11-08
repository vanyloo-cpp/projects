#include <iostream>
using namespace std;

int main(){
    int n;

    cin >> n;

    char arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = '.';
            
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                arr[i][j] = '*';
            }
            
            if (i + j == n - 1)
            {
                arr[i][j] = '*';
            }
            if (j == n / 2)
            {
                arr[i][j] = '*';
            }
            if (i == n / 2)
            {
                arr[i][j] = '*';
            }
            
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
            
        }
        cout << endl;
    }
    
}