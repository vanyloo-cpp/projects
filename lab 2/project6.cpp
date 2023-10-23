#include <iostream>

using namespace std;

int main(){
    int n, m, i, s;
    
    cin >> n;

    m = 0;
    i = 0;
    
while (i < n)
    {
        i++;
        m = m + i;    
    }
    
    cout << m << endl;
     return 0;
}