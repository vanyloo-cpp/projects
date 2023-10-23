#include <iostream>

using namespace std;

int main(){
    int m ,n;
    bool find = false;

    cin >> m >> n;

    for (int i = m; i <= n; i++)
    {   
        int j;
        for (j = 2; j * j < i; j++)
        {
            if(i % j == 0){
                break;

            }
        }
        if(j * j > i){
            find = true;

            cout << i << endl;
        }
    }
    
    if(!find){
    cout << "Absent";
    }
}