#include <iostream>

using namespace std;

int main(){
    int cnt;

    cout << "How many people visit gym?: ";

    cin >> cnt;

    int arr[cnt];

    for (int i = 0; i < cnt; i++)
    {
        cout << "Input age " << i + 1 << " visitor: ";

        cin >> arr[i];
    }
    
    int max_age = arr[0];
    int min_age = arr[0];
    int avrg = 0;

    for (int i = 0; i < cnt; i++)
    {
        if(min_age > arr[i]){
            min_age = arr[i];
        }
        
        if(max_age < arr[i]){
            max_age = arr[i];
        }

        avrg += arr[i];
    }
    cout << " " << endl;
    cout << "Minimum age of visitors: " << min_age << endl;
    cout << "Maximum age of visitors: " << max_age << endl;
    cout << "Average age of visitors: " << (avrg / cnt) << endl;
}