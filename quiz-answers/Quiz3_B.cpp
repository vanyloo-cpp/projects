#include <iostream>
#include <string>
int main()
{
    char a;
    std::string s;
    std::cin >> a >> s;
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == a)
        {
            s.erase(i--, 1);
        }
    }
    std::cout << s;
}