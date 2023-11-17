#include <iostream>
#include <string>
int main()
{
    std::string s;
    getline(std::cin, s);
    std::string res;
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            res += s[i];
        }
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            res += s[i];
        }
    }
    std::cout << res;
}