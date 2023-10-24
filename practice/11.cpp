#include <iostream>

using namespace std;

int main(){
    int cnt, car;
    car = 1;
    int remains = 0;
    cout << "How many boxes are in the warehouse: ";

    cin >> cnt;

    while (cnt != 0)
    {
        
        cout << "How many boxes to load into the " << car << " machine: ";

        cin >> remains;

        if (remains > cnt)
        {
            cout << "You have entered more values than are available in stock" << endl;
            break;
        }
        
        cnt -= remains;

        car++;
    }

    if(cnt == 0){
        cout << "" << endl;
        cout << "You have loaded all the boxes in the warehouse!" << endl;
    }
    

    
}