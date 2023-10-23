#include <iostream>
#include <cmath>

using namespace std;

string book(){
    int a;

    cin >> a;

    int books[a];
    string s = "No";

    for (int i = 0; i < a; i++)
    {
        cin >> books[i];
    }
    int id;

    cin >> id;

    for (int i = 0; i < a; i++)
    {
        if(id == books[i]){
            s = "Yes";
        }
    }
    return s;
}

int main() {
    
    cout << book();  


    return 0; 
}
