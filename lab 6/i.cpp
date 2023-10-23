#include <iostream>
#include <string>

using namespace std;

string capital(){
    string s;

    cin >> s;
    
    for (int i = 0; i < s.size(); i += 2)
    {
        s[i] = toupper(s[i]);
    }

    return s;
     

}

int main(){

    cout << capital();
}