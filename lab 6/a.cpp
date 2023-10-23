#include <iostream>

using namespace std;

int sum_elements(int a, int b){
    int result = a + b;


    return result;
}

int main(){
    int a, b;
    cin >> a >> b;

    cout << sum_elements(a, b);
}