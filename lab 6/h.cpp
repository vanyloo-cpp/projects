#include <iostream>

using namespace std;

string valid(){
    string n;
    string result = "Not Valid";
    
    int valid_numbers = 0;

    cin >> n;

    for (int i = 0; i < n.size(); i++)
    {
        if((n[i] - '0') % 2 == 0){
            valid_numbers++;
        }
        else{
            result = "Not valid";
            break;
        }
    }
    if(valid_numbers == n.size()){
        result = "Valid";
    }
    return result;
}

int main(){
    cout << valid();
}