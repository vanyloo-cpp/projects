#include <iostream>
#include <string>
int main()
{
    std::string s;
    getline(std::cin, s);
    int maxLenght = 0;
    int count = 0;
    char letter = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        for (int j = i; j < s.size(); ++j)
        {
            if (s[i] == s[j])
            {
                ++count;
            }
            else if (s[j] != s[j + 1])
            {
                break;
            }
        }
        if (maxLenght < count)
        {
            maxLenght = count;
            letter = s[i];
        }
        count = 0;
    }
    std::cout << letter << " " << maxLenght;
}