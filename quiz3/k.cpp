#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    string s;
    cin >> s;

    int sum = 0;

    reverse(s.begin(), s.end());

    for (int i = 0; i < s.size(); i++)
    {
        int digit = s[i] - '0';
        if(digit == 1){
            sum += pow(2,i);
        }
        
    }
    cout << sum;
}