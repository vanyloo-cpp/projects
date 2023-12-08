#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;


    int a, b, c, cntlower, cntupper;
    
    cin >> a >> b >> c >> s;

    cntlower = 0;
    cntupper = 0;

    for (int i = 0; i < a; i++)
    {
        if(islower(s[i])){
            cntlower++;
        }
        else{
            cntupper++;
        }
    }
    
    int price1 = cntlower * c;
    int price2 = cntupper * b;

    if(price1 > price2){
        cout << price2;
    }
    else{
        cout << price1;
    }
}