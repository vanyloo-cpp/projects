#include <iostream>
#include <string>
int main()
{
    std::string s;
    getline(std::cin, s);
    int n = 0;
    std::cin >> n;
    int count = 0;
    std::string res;
    while (n--)
    {
        char al;
        std::cin >> al;
        res += al;
    }
    int min = 0;
    int k = 0;
    int l = res.size();
    std::string ser;
    for (int i = 0; i < l; ++i)
    {
        for (int j = 0; j < res.size(); ++j)
        {
            if (min > int(res[j]) || min == 0)
            {
                min = int(res[j]);
                k = j;
            }
        }
        res.erase(k, 1);
        ser += char(min);
        min = 0;
    }
    for (int i = 0; i < ser.size(); ++i)
    {
        for (int j = 0; j < s.size(); ++j)
        {
            if (ser[i] == s[j])
            {
                ++count;
            }
        }
        std::cout << ser[i]
                  << " - "
                  << count << "\n";
        count = 0;
    }
}