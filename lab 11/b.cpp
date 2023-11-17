#include <iostream>
#include <set>

using namespace std;

int main(){
    int n,num;
    
    cin >> n;
    set <int> elements;

    for (int i = 0; i < n; i++)
    {
        
        cin >> num;

        elements.insert(num);
        
    }
    
    if(elements.size() == n){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}