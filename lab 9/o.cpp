#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
    int n;
    string login, password;
    cin >> n;

    map <string, string> reg;

    for (int i = 0; i < n; i++)
    {
        cin >> login >> password;

        reg.insert(make_pair(login, password));
    }
    
    int m;

    cin >> m;

    multimap <string, string> sign_in;

    for (int i = 0; i < m; i++)
    {
        cin >> login >> password;

        sign_in.insert(make_pair(login, password));
    }
    
    for (const auto& pair : reg)
    {
        int login_correct = pair.first;
        int password_correct = pair.second;

        auto it = sign_in.find(login_correct);
        auto it2 = sign_in.find(password_correct);

        if (it != sign_in.end())
        {
            auto it2 = it -> second;

            if (password_correct == it2)
            {
                cout << "password correct";
            }
             
        }

        else if (it == sign_in.end()){
            auto it2 = it -> second;

            if (password_correct != it2)
            {
                cout << "login error";
            }
            
        }
        
        else if(it == sign_in.end()){
            auto it = it -> second;

            if (password_correct == it2)
            {
                cout << "correcet password";
            }
            
        }
    }
       
}