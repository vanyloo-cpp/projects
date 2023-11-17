#include <iostream>
std::string dexToHex(std::string s, int n)
{
    std::string hex = "0123456789ABCDEF";
    while (n > 0)
    {
        s += hex[n % 16];
        n /= 16;
    }
    std::string res;
    for (int i = s.size() - 1; i >= 0; --i)
    {
        res += s[i];
    }
    return res;
}
int main()
{
    int n = 0;
    std::cin >> n;
    std::string s;
    std::cout << dexToHex(s, n);
}