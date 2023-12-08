#include <iostream>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    int cnt = 0;
    cin >> n;

    unordered_map <int, int> mymap;

    for (int i = 0; i < n; i++)
    {
        int number1, number2;

        cin >> number1 >> number2;

        mymap.insert(make_pair(number1, number2));
    }
    
    for(auto &it : mymap){

    }
}