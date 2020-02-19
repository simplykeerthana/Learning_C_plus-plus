
//linear search

#include <iostream>

using namespace std;

int main()
{
    
    int A[7] = {2,3,4,5,6,7,8};
    int i, key;
    
    cout << "enter the key";
    cin >> key;
    

    
    for(i = 0; i < 7; i++)
    {
        if(key == A[i])
        {
            cout << "Key is found at " << i << endl;
        }
       
    }
    

    
    return 0;
}
