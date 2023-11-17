#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    char letter;

    cin >> letter >> s;

    for(auto c : s){
        if(c != letter){
            cout << c;
        }
    }
}