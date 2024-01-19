#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    int sum = 0;

    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        sum += s[i] - '0';
    }
    int last = s[s.size() - 1] - '0';
    
    if(sum % last == 0){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
}