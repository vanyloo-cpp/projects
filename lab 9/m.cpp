#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    queue<string> boysQueue;
    vector<string> res;

    for (int i = 0; i < n; ++i) {
        int type;
        cin >> type;

        if (type == 1) {
            string name;
            cin >> name;
            boysQueue.push(name);
        } else if (type == 2) {
            if (!boysQueue.empty()) {
                res.push_back(boysQueue.front());
                boysQueue.pop();
            } else {
                res.push_back("queue is empty");
            }
        }
    }

    for (const auto &it : res) {
        cout << it << endl;
    }
    return 0;
}
