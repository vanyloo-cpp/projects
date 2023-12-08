#include <iostream>
#include <map>
using namespace std;
int main() {
    int n;
    cin >> n;
    map<pair<int, int>, int> mymap;

    for (int i = 0; i< n; i++) {
        int a, b;
        cin >> a >> b;
        pair<int, int> mypair;
        if (a < b) {
            mypair = make_pair(a, b);
        } else {
            mypair = make_pair(b, a);
        }
        if (mymap.find(mypair) != mymap.end()) {
            mymap[mypair]++;
            cout << mymap[mypair] << endl;
        }else {
            cout << 0 << endl;
            mymap[mypair] = 0;
        }
    }
    return 0;
}