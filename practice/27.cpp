#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int x[8], y[8], x1, y1;
    bool f = false;
    for (int i=0; i < 8; i++)
    {
        cin >> x1 >> y1;
        x[i] = x1; y[i] = y1;
    }
    for (int i = 0; i < 7; i++)
    {
        for (int j = i + 1; j < 8; j++)
        {
            if (x[i] == x[j] or y[i] == y[j] or abs(x[i] - x[j]) == abs(y[i] - y[j]))
            {
                f = true;
                break;
            }
        }
    }
    f ? cout << "YES": cout << "NO";
   
}