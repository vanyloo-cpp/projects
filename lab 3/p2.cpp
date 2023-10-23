#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;

    cin >> n;

    if(float(sqrt(n)) == sqrt(n)){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}