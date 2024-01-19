#include <iostream>
#include <map>

using namespace std;

int main(){
    int n;

    cin >> n;

    map<string, int> mp;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        mp[s]++;
    }

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s;

        cin >> s;

        mp[s]++;
    }
    
    for(map<string, int>::iterator it = mp.begin(); it != mp.end();++it){
        if(it->second == 1){
            cout << it->first << endl;
        }
    }
    
}