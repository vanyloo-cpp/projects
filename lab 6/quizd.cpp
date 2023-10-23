#include <iostream>

using namespace std;

int main(){
    int a, b, c, d, e, f, res;

    res = 0;

    cin >> a >> b >> c >> d >> e >> f;

    if((a <= c && c <= b && f >= d && f <= e) || (a >= c && c >= b && f <= d && f >= e)){
        cout << "yes";
    }

    else{
        cout << "no";
    }
}