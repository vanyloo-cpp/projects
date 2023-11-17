#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;

    for(auto c : s){
        if(islower(c)){
            cout << c;
        }
    }
}