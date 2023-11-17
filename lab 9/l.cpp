#include <iostream>
#include <map>

using namespace std;

int main(){
    int n, first, second;

    cin >> n;

    multimap <int, int> result;
    for (int i = 0; i < n; i++)
    {
        cin >> first >> second;

        result.insert(make_pair(first+second,i + 1));
    }
    
    for (auto &it : result)
    {
        cout << it.second << " ";
    }
    
}