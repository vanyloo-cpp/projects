#include <iostream>
#include <string>
std::string strToBool(std::string str)
{
    if (str == "1")
    {
        return "true";
    }
    else if (str == "0")
    {
        return "false";
    }
    else
    {
        return str;
    }
}
int main()
{
    std::string s;
    std::cin >> s;
    std::cout << strToBool(s);
}