#include <iostream>
#include <string>

using namespace std;

int main(){
    string n;
    int sum = 0;
    cin >> n;

    for (int i = 0; i < n.size(); i++)
    {
        sum += (n[i] - '0') / 2;
    }

    cout << sum;
    
}
