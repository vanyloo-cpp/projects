#include <string>
#include <iostream>

using namespace std;

int main(){
    string s;
    getline(cin, s);

    for (int i = 0; i < s.size(); i++)
    {
        if(isalpha(s[i])){
            if (s[i] == 'z')
            {
                s[i] = 'a';
            }
            else{
                s[i] += 1;
            }
        }
    }
    
    cout << s;
}