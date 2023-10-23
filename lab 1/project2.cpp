#include <iostream>

using namespace std;
int main(){
    int age;
    int sum;

    cin >> age;
    cin >> sum;

    int first = sum / 100;
    int last  = sum % 10;

    int result = age + first + last;
    cout << result << endl;

    return 0;
    
}
