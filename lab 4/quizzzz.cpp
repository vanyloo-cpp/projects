#include <iostream>

using namespace std;

int main() {
    int n, m, b;
    
    cin >> n >> m >> b;
    
    int sum = n + m;

    float precent = sum /    10;

    if (b < precent){
        cout << "You are my sweet baby";
    }
    else{
        cout << "Boris, you are punished!";
    }

    cout << precent;
}
