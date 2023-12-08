#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    queue<string> queueOfBoys;

    for (int i = 0; i < n; ++i) {
        int actionType;
        cin >> actionType;

        if (actionType == 1) {
            string boyName;
            cin >> boyName;
            queueOfBoys.push(boyName);
            cout << queueOfBoys.front() << endl; 
        } else if (actionType == 2) {
            if (!queueOfBoys.empty()) {
                queueOfBoys.pop();
                if (!queueOfBoys.empty()) {
                    cout << queueOfBoys.front() << endl;
                } else {
                    cout << "queue is empty" << endl;
                }
            } else {
                cout << "queue is empty" << endl;
            }
        }
    }

    return 0;
}
