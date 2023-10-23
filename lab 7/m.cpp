#include <iostream>

using namespace std;

int natural(){
    int n;
    
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    
}

int main(){
    natural();
}

/*#include <iostream>

using namespace std;

void printNaturalNumbers(int n) {
    if (n > 0) {
        printNaturalNumbers(n - 1); 
        cout << n << " "; 
    }
}

int main() {
    int n;
    cin >> n;

    printNaturalNumbers(n);

    return 0;
}*/