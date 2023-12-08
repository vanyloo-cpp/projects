#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        int temp = s[i] - 96;
        int temp2 = (26 - temp + 1) + 96;
        char letter = char(temp2);
        cout << letter;
    }
    return 0;
}