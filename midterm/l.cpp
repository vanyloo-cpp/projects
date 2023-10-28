#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n,m,limit;

    cin >> n >> m;

    vector< vector <int> > arr(n, vector <int> (m));

    
    bool penalty = false;

    for(int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            
            
        }
        
    }
    cin >> limit;
    for(int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(arr[i][j] > limit){
                cout << "Penalty!";
                return 0;
            }
            
            
        }
        
    }
    
    cout << "No penalty for today.";
}