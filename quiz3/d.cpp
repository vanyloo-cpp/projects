#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string dexTohex(){
    int n;
    string res = "";

    while(n > 0){
        int m = n % 16;
        if(m < 10){
            res += to_string(m);
        }
        else{
            if(m == 10){
                res += 'A';
            }
            else if(m == 11){
                res += 'B';
            }
            else if(m == 12){
                res += 'C';
            }
            else if(m == 13){
                res += 'D';
            }
            else if (m == 14){
                res += 'E';
            }
            else if (m == 15){
                res += 'F';
            }
        }
        n /= 16; 
    }
    reverse(res.begin(), res.end());
    return res;
}

int main(){
    int n;
    cin >> n;

    cout << dexTohex();
}