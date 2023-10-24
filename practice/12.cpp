#include <iostream>

using namespace std;

int main(){
    int cnt, n, sum;

    cout << "Input numbers (0 for exit programm):" << endl;

    while(true){
        cin >> n;

        cnt++;
        sum += n;
        
        if(n == 0){
            break;
        }
    }

    cnt -= 1;
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << "Input counts: " << cnt << endl;
    cout << "Sum of numbers: " << sum << endl;
    cout << "Averege of numbers: " << sum / cnt << endl;
}