#include <iostream>
double GetPriceQualityRatio(double price, double quality)
{
    return quality / price;
}
int main()
{
    int amountOfPhones = 0;
    std::cin >> amountOfPhones;
    std::string name;
    double price = 0, quality = 0;
    double minQuality = 0;
    double ratio = 0;
    std::string bestPhone;
    for (int i = 0; i < amountOfPhones; ++i)
    {
        std::cin >> name >> price >> quality;
        ratio = GetPriceQualityRatio(price, quality);
        if (minQuality < ratio || minQuality == 0)
        {
            minQuality = ratio;
            bestPhone = name;
        }
    }
    std::cout << bestPhone;
}