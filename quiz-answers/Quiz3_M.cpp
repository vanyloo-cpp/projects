#include <iostream>
#include <string>
int main()
{
    std::string s;
    getline(std::cin, s);
    int sum = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        sum += int(s[i]);
    }
    sum > 300 ? std::cout << "It is tasty!" : std::cout << "Oh, no!";
}