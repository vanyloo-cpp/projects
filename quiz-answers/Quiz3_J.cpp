#include <iostream>
#include <string>
int main()
{
    std::string s;
    getline(std::cin, s);
    std::string l;
    int n = s.size() * 2;
    for (int j = 0; j < n; ++j)
    {
        for (int i = s.size() - 1; i >= 0; --i)
        {
            l += s[i];
        }
        if (l != s || s == "")
        {
            std::cout << s.size();
            return 0;
        }
        else
        {
            s.erase(0, 1);
            l.clear();
        }
    }
}