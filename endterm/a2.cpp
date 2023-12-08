#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <sstream>

int main() {
    std::string str;
    std::getline(std::cin, str);

    std::vector<std::string> words;
    std::istringstream iss(str);
    std::string word;

    while (iss >> word) {
        words.push_back(word);
    }

    std::map<std::string, int> wordCount;

    for (const auto &w : words) {
        wordCount[w]++;
    }

    std::multimap<int, std::string, std::greater<int>> sortedWordCount;

    for (const auto &pair : wordCount) {
        sortedWordCount.insert(std::make_pair(pair.second, pair.first));
    }

    for (const auto &pair : sortedWordCount) {
        std::cout << pair.second << " : " << pair.first << std::endl;
    }

    return 0;
}
