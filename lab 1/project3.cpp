#include <iostream>
#include <bitset>

using namespace std;

int main() {
    int N;
    cin >> N;

   
    bitset<4> binary(N);

    
    bitset<4> reversed_binary;
    for (int i = 0; i < 4; ++i) {
        reversed_binary[i] = binary[3 - i];
    }

    
    int reversed_number = reversed_binary.to_ulong();

    
    cout << reversed_number << endl;

    return 0;
}
