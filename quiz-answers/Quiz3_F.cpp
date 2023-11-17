#include <iostream>
#include <string>
int main()
{
    std::string s;
    getline(std::cin, s);
    for (int i = 0; i < s.size(); ++i)
    {
        if ('a' <= s[i] && 'z' >= s[i])
        {
            std::cout << s[i];
        }
    }
}