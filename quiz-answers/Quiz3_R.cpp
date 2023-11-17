#include <iostream>
#include <string>
int main()
{
    std::string s;
    char a;
    getline(std::cin, s);
    std::cin >> a;
    int minIndex = -1, maxIndex = -1;
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == a)
        {
            if (i < minIndex || minIndex == -1)
            {
                minIndex = i;
            }
            if (i > maxIndex || maxIndex == -1)
            {
                maxIndex = i;   
            }
        }
    }
    minIndex != maxIndex ? std::cout << minIndex << " " << maxIndex : std::cout << minIndex;
}