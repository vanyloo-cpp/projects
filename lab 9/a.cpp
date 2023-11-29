#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, x, y;

    cin >> n;

    vector < pair <int, int>> coordinates;

    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;

        coordinates.push_back(make_pair(x, y));
    }
    
   sort(coordinates.begin(), coordinates.end());

   for(auto &it : coordinates){
        cout << it.first << " " << it.second << endl;
   }
    

}