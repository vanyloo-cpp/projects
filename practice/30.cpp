#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;

    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << abs(i - j) << " ";
            
        }
        cout << endl;
    }
    
}
