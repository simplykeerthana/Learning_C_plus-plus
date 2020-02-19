#include <iostream>

using namespace std;

int main()
{
    
    int A[7] = {2,3,4,5,6,7,8};
    int i, max;
    
    max = A[0];
    
    for(i = 0; i < 7; i++)
    {
        if(A[i]>max)
        {
            max = A[i];
        }
    }
    
    cout << "maximum no is " << max << endl;
    
    
    return 0;
}
