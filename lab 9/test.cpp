#include <iostream>
#include <map>
#include <vector>
 
int main() {
    std::map<int, int> map1 = {{1, 6}, {3, 4}, {5, 3}, {7, 1}};
    std::map<int, int> map2 = {{6, 6}, {7,8}, {5, 3}, {7, 1},{1, 6}, {3, 4}};
    std::vector<int> v;
 
for(auto it = map1.begin(); it != map1.end(); ++it)
{
    if(map2.find(it->first)!= map2.end())
  {
    v.push_back(it->first);
    std::cout << it->first << "\n";
  }
}
 
    return 0;
}