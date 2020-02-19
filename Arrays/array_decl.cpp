#include <iostream>

using namespace std;


int main()
{
    int A[] = {2, 4, 6, 8, 10, 12};
    
    for(int i = 0; i < 6; i++)
    {
        cout << A[i] << endl;
    }
    
    // for range loop
    cout << "\n" << endl;
    for( int x:A)
    {
          cout << x << endl;
    }
    
    return 0;
}
