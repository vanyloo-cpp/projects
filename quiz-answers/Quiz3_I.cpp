#include <iostream>
#include <string>
int main()
{
    std::string s;
    getline(std::cin, s);
    std::string l;
    getline(std::cin, l);
    char c;
    std::cin >> c;
    for (int i = 0; i < s.size(); ++i)
    {
        for (int j = 0; j < l.size(); ++j)
        {
            if (s[i] == l[j])
            {
                s[i] = c;
            }
        }
    }
    for (auto r : s)
    {
        std::cout << r;
    }
}