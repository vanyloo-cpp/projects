#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;

    getline(cin, s);

    if (islower(s[0]))
    {
        cout << static_cast<char>(toupper(s[0]));
    }
    
    else if(isupper(s[0])){
        cout << static_cast<char>(tolower(s[0]));
    }
    else{
        cout << s;
    }
}