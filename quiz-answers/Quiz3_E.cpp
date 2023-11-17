#include <iostream>
#include <string>
int main()
{
    std::string s;
    getline(std::cin, s);
    int sum = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        if ('1' <= s[i] && '9' >= s[i])
        {
            sum += int(s[i]) - '0';
        }
    }
    std::cout << sum;
}