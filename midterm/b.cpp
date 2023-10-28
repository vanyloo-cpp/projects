#include <iostream>

using namespace std;

int main() {
    int w, h, n, x1, y1, x2, y2, area, trarea;

    cin >> w >> h >> n;

    area = w * h;

    for (int i = 0; i < n; i++) {
        cin >> x1 >> y1 >> x2 >> y2;
        trarea = (x2 - x1) * (y2 - y1);
        area -= trarea;
    }

    cout << area;
}
