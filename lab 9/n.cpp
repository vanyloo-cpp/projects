#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(){
    /*
    int n;

    cin >> n;

    vector <int> arr;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

    }
    
    map <int, int> mymap;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[j] > arr[i])
            {
                mymap.insert(make_pair(arr[i],arr[j]));
            }
            
        }
        
    }
    int sum = 0;
    for (auto &pair : mymap )
    {
        cout << pair.first << " " << pair.second << endl;
    }
    
    cout << sum;
    */

   int n;

   cin >> n;
   vector <int> arr(n);
    vector <pair<int, int>> pairs;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                pairs.push_back(make_pair(arr[i],arr[j]));
            }
            
        }
        
    }

    int cnt = 0;    
    for(auto &it : pairs){
        if ((it.first ^ it.second) <= n)
        {
            cnt++;
        }
        
    }
    cout << cnt;
}