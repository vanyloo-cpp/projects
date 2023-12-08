#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string s;
    string res = "";
    getline(cin, s);

    vector<string> arr;

    string word = ""; 

    for (int i = 0; i < s.size(); i++) {
        if (s[i] != ' ') {
            word += s[i];
        } else {
            arr.push_back(word);
            word = ""; 
        }
    }

    if (!word.empty()) {
        arr.push_back(word);
    }

    int max = 0;
    
    for (int i = 0; i < arr.size(); i++)
    {
        
        if(arr[i].size() > max){
            max = arr[i].size();
            res = arr[i];
        }
    }
    
    cout << res;
    return 0;
}
