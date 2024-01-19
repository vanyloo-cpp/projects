#include <iostream>
#include <vector>
#include <set>
#include <string>
using namespace std;
int main() {
    string str;
    int n;
    cin >> n;
    vector< vector<int> > matrix (n, vector<int> (3));
    for (int i = 0; i < n; i++) {
        cin >> str;
        matrix[i][0] = stoi(str.substr(0, 2));
        matrix[i][1] = stoi(str.substr(3, 2));
        matrix[i][2] = stoi(str.substr(6, 4));
    }

    set<vector<int>> myset;

    for (int i = 0; i < n; i++) {
        myset.insert(matrix[i]);
    }
    for (vector<int> var : myset) {
        for (int i = 0; i < 3; i++) {
            if (var[i] < 10) {
                cout << "0";
            }
            cout << var[i];
            if (i < 2) {
                cout << "-";
            }
        }
        cout << endl;
    }
    return 0;
}