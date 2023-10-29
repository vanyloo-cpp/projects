#include <iostream>
#include <set>
#include <string>

using namespace std;

int main(){
    int n;
    string s;
    cin >> n;
    set<string> reg_logins;
    
    // Ввод данных (логинов)
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        reg_logins.insert(s);
    }

    // Вывод результатов
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (reg_logins.find(s) == reg_logins.end()){
            cout << "new user added" << endl;
        }
        else{
            cout << "user already exists" << endl;
        }
    }

    return 0;
}
