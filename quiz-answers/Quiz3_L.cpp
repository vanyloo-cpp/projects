#include <iostream>
#include <string>
int main()
{
    std::string s;
    getline(std::cin, s);
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
        {
            if (s[i] != 'z' && s[i] != 'Z')
            {
                s[i] = char(s[i] + 1);
            }
            else if (s[i] == 'z')
            {
                s[i] = 'a';
            }
            else if (s[i] == 'Z')
            {
                s[i] = 'A';
            }
        }
    }
    std::cout << s;
}