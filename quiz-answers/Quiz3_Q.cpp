#include <iostream>
#include <string>
int main()
{
    int n = 0;
    std::cin >> n;
    std::string l = "@gmail.com";
    std::string s;
    int p = 0;
    while (getline(std::cin, s))
    {
        if (s.find("@gmail.com") != -1)
        {
            for (int j = 0; j < s.size(); ++j)
            {
                for (int i = 0; i < l.size(); ++i)
                {
                    if (s[j] == l[i] && s[j + 1] == l[i + 1])
                    {
                        s.erase(j, 1);
                    }
                }
            }
            std::cout << s << "\n";
        }
    }
}