#include <iostream>

using namespace std;


int main()
{
    int i, n, sum =0;
    
    cout << "enter the value of n";
    cin >> n;
    
    for(i = 1; i<=n; i++)
    {
        if(n%i == 0)
        {
            sum = sum + i;
        }
    }
    
    if(2*n == sum)
    {
        cout << "perfect number" << endl;
        
    }
    else
    {
        cout << "not perfect number" << endl;
    }
    
    
    
    
    return 0;
}
