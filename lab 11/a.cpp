#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
    unordered_map<string, int> days ={
    {"SUN",0},
    {"MON",1},
    {"TUE",2},
    {"WED",3},
    {"THU",4},
    {"FRI",5},
    {"SAT",6}
    };

    string currentDay;

    cin >> currentDay;

    int next = abs((days[currentDay] - 7));

    cout << next;

}