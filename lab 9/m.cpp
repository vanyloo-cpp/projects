#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>

using namespace std;
/*
int main(){
    int n;

    cin >> n;

    unordered_map<int, string> que;
    vector<string> res;

    for (int i = 0; i < n; i++)
    {
        int m;
        string name;
        cin >> m;
        if (m == 1)
        {
            cin >> name;
            que.insert(make_pair(m, name));
        }
        else{
            que.insert(make_pair(m, to_string(i)));
        }
        
    }
    
    for (auto &pair : que)
    {
        auto &it = pair.first;

        if (it == 1)
        {
            res.push_back(pair.second);
        }
        else{
            res.push_back("queue is empty");
        }
        
    }
    
    for(auto &element : res){
        cout << element << endl;
    }
}
*/

int main(){
    int n;

    cin >> n;

    unordered_map<int, string> que;
    vector<string> res;

    for (int i = 0; i < n; i++)
    {
        int m;
        string name;
        cin >> m;
        if (m == 1)
        {
            cin >> name;
            res.push_back(name);
        }
        else{
            res.push_back("queue is empty");
        }
        
    }    

    for(auto &element : res){
        cout << element << endl;
    }
}