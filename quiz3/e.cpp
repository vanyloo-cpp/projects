#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;

    cin >> s;

    int sum = 0;

    for(auto c : s){
        if (isdigit(c))
        {
            sum += c - '0';
        }
        
    }

    cout << sum;
}