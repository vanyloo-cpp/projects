#include <iostream>

using namespace std;

int main(){
    bool x, y, z;

    cin >> x >> y >> z;

    if ((x == true && y == true) || (x == true && z == true) || (y == true && z == true))
    {
        cout << "1";
    }
    
    else{
        cout << "0";
    }

    return 0;
}