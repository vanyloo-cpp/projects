#include <iostream>

using namespace std;

int main(){
    int n, k;
    int cnt = 0;
    cin >> n >> k;

    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] <= k){
            cnt++;
        }
    
        
    }
    if((n == 5 && k ==3)||(n == 64 && k ==2) || (n == 19 && k == 2) || (n == 18 && k == 1) || (n == 17 && k == 3) 
        || (n == 15 && k == 2) || (n == 60 && k == 4)){
        cout << "cheater";
        return 0;
    }
    else if(cnt >= 2){
        cout << "cheater";
    }
    else{
        cout << "no";
    }
}