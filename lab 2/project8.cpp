#include <iostream>

using namespace std;

int main(){
    int n;
    int even = 0;
    int odd = 0;

    cin >> n;

    int arr[n];
    

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if (arr[i] % 2 == 0)
        {
            even+=1;
        }
        else if(arr[i] % 2 != 0) {
            odd++;
        }
    }
    


    cout << even << " " << odd << endl;
    
}   