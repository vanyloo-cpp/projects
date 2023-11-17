#include <iostream>
#include <string>
int main()
{
    std::string s;
    getline(std::cin, s);
    int res = 1;
    int dec = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == '1')
        {
            int n = s.size() - i - 1;
            while (n > 0)
            {
                res *= 2;
                --n;
            }
            dec += res;
            res = 1;
        }
    }
    std::cout << dec;
}