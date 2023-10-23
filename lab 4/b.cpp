#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;
    
    int arr[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int nmax = arr[0][0]; 
    int secondN = arr[0][0]; 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] > nmax) {
                secondN = nmax; 
                nmax = arr[i][j]; 
            } else if (arr[i][j] > secondN && arr[i][j] < nmax) {
                secondN = arr[i][j]; 
            }
        }
    }
    if (nmax == secondN){
        cout << '0' << endl;
    }
    else if(nmax > secondN){
        cout << secondN << endl; 
    } 

}
