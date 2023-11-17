#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    string s;
    char t;
    string index = "";
    cin >> s >> t;
    vector <string> arr;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == t)
        {
            arr.push_back(to_string(i));
        }
        
    }
    
    if (arr.size() > 2)
    {
        cout << arr[0] << " " << arr[arr.size() - 1];
    }
    else{
        cout << arr[0] << " " << arr[1];
    }
    ;
}