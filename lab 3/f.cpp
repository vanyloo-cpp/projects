#include <iostream>  
using namespace std;  
  
int main ()  
{  
    int  num, temp, i, j;  
    cin >> num;  
    int arr[num];
    for (i = 0; i < num; i++)  
    {  
        cin >> arr[i];  
    }  
      
      
    for ( i = 0, j = num - 1; i < num/2; i++, j--)  
    {     
        temp = arr[i];  
        arr[i] = arr[j];  
        arr[j] = temp;  
    }  
     
    for ( i = 0; i < num; i++)  
    {  
        cout << arr[i] << " " <<endl;  
    }  
    return 0;  
}  