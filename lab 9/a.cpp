#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <map>

using namespace std;

int main(){
    int n, x, y;

    cin >> n;

    multimap <int, int> points;

    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;

        points.insert(make_pair(x, y));
    }
    
    for (const auto &it : points)
    {
        cout << it.first << " " << it.second << endl;
    }
    

}