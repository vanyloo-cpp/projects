#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    int  l, r;
    cin >> s >> l >> r;

    cout << s.substr(l, r - l + 1) << endl;

}