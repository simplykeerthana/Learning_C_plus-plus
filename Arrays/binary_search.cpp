
#include <iostream>

using namespace std;

int main ()
{

    int A[10] = {3,4,5,2,3,4,5,3,4,5};
    
    int low = 0, high = 9, key, mid;
    
    cout << "Enter Key";
    cin >> key;
    

while(low <=high)
{
    mid=(low+high)/2;

    if(key == A[mid])
    {
        cout << "Fount at" << mid;
        return 0;
    }
    else if(key < A[mid])
    {
        high = mid -1;
    }
    else
    {
        low = mid + 1;
    }


}
cout << "not found";
    
    return 0;
    
}

