#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <int> arr(4);
    

    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    
    int min = arr[0];

    for (int i = 0; i < 4; i++)
    {
        if(min > arr[i]){
            min = arr[i];
        }
    }
    cout << min;
}