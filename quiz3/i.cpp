#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string s, t;
    char c;

    getline(cin, s);
    getline(cin, t);
    cin >> c;

    for (int i = 0; i < t.size(); i++)
    {
        for (int j = 0; j < s.size(); j++)
        {
            if(s[j] == t[i]){
                s[j] = c;
            }
            
        }
        
    }
    cout << s;
}