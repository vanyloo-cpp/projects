#include <iostream>

using namespace std;

int main(){
    int a, b, sum;

    cout << "Input range: ";

    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
        
    }
    
    cout << "Sum of odd nubers: "<< sum; 
}