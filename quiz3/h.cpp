#include <iostream>
#include <string>
#include <vector>

using namespace std;

int GetPriceQualityRatio(int n, vector<string>& phones, vector<int>& cost, vector<int>& qual) {
    int index = 0;

    for (int i = 0; i < n; i++) {
        cin >> phones[i];
        cin >> cost[i] >> qual[i];
    }

    double best = static_cast<double>(qual[0]) / cost[0];
    for (int i = 1; i < n; i++) {
        double ratio = static_cast<double>(qual[i]) / cost[i];
        if (ratio > best) {
            best = ratio;
            index = i;
        }
    }

    return index;  
}

int main() {
    int n;
    cin >> n;

    vector<string> phones(n);
    vector<int> cost(n);
    vector<int> qual(n);

    int res = GetPriceQualityRatio(n, phones, cost, qual);
    cout << phones[res] << endl;

    return 0;
}
