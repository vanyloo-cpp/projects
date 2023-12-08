#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::string str;
    std::cin >> str;

    std::vector<char> array(str.begin(), str.end());

    std::cout << "The permutation variants for string " << str << " are :" << std::endl;


    sort(array.begin(), array.end());
    for (auto var : array) {
        std::cout << var;
    }
    std::cout << std::endl;


   while (std::next_permutation(array.begin(), array.end())) {
        for (auto var : array) {
            std::cout << var;
        }
        std::cout << std::endl; 
   }

    return 0;
}
