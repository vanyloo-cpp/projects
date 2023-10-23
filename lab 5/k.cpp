#include <iostream>

using namespace std;

int main(){
    string s;
    int vowel = 0;
    cin >> s;

    for (int i = 0; i <= s.size(); i++)
    {
        if(int(s[i]) == 97 || int(s[i]) == 101 || int(s[i]) ==  105 || int(s[i]) == 111 || int(s[i]) == 117){
            vowel++;
        }
    }
    cout << vowel << endl;
}