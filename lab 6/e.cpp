#include <iostream>
#include <cmath>

using namespace std;

double hypo(int a, int b) {
    double c = sqrt(a * a + b * b);
    return c;
}

int main() {
    int a, b;

    cin >> a >> b;

    double result = hypo(a, b);

    cout << result << endl;

    return 0;
}
