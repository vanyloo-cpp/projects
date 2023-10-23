#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, k;
    bool find = false;

    cin >> n;

    vector <int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        
    }
    cin >> k;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            find = true;
            break;
            
        }
        
                
    }
    
    if(find){
        cout << "Yes";
    }
    else{
        cout << "No";
    }


}