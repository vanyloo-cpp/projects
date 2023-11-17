#include <iostream>
#include <string>
std::string isTruth(std::string s)
{
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
        {
            continue;
        }
        else
        {
            return "";
        }
    }
    return s + '\n';
}
int main()
{
    std::string s;
    std::string temp;
    getline(std::cin, s);
    int nsize = 1;
    for (int i = 0; i < nsize; ++i)
    {
        for (int j = 0; j < s.size(); ++j)
        {
            if (s[j] != ' ')
            {
                temp += s[j];
                s.erase(j--, 1);
            }
            else
            {
                ++nsize;
                s.erase(j--, 1);
                break;
            }
        }
        std::cout << isTruth(temp);
        temp.clear();
    }
}