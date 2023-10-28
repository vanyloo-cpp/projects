#include <iostream> 
#include <vector>
using namespace std;

int main(){
    int n;
    int left = 0;
    int right = 0;
    int cnt_left = 0;
    int cnt_right = 0;
    
    cin >> n;
    vector <int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0){
            left += arr[i];
            cnt_left++;
        }
        else{
            right += arr[i];
            cnt_right++;
        }
    }
    cout << "Left hand magic power: " << left * cnt_left << endl;;
    cout << "Right hand magic power: " << right * cnt_right;  
}