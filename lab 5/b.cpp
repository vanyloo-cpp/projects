#include <iostream>
#include <string>

using namespace std;

int main(){
    string a;

    cin >> a;

    for (int i = 0; i < a.length(); i++)
    {
        if (int (a[i]) >= 97 && int(a[i])<=122){
            a[i] = a[i] - 32;
        }
        
    }
    cout << a << endl;
}