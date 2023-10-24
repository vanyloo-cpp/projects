#include <iostream>

using namespace std;

int main(){
    int n;
    char exit;
    while(true){
        cout << "Input digit: ";
        
        cin >> n;

        cout << n * n << endl;

        cout << "Continue? y - yes, e - exit: ";

        cin >> exit;

        if(exit == 'e'){
            break;
        }
    }
}