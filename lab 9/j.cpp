    #include <iostream>
    #include <map>

    using namespace std;

    int main(){
        int n, ep;
        string name;

        cin >> n;

        multimap <string, int> input;

        for (int i = 0; i < n; i++)
        {
            cin >> name >> ep;

            input.insert(make_pair(name, ep));
        }

        map <string, int> result;

        for(const auto &it : input){
            result[it.first] += it.second;
        }

        for (const auto &it : result)
        {
            cout << it.first << " " << it.second << endl;
        }
                
    }