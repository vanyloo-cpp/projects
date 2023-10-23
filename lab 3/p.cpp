#include <iostream>
#include <cmath>

using namespace std;

int main(){
    
    int x;

    cin >> x;

    if ((float)sqrt(x) - sqrt(x) == 0 ){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}