#include <iostream>

using namespace std;


int main()
{
    int r, n, sum = 0, m;
    
    cout << "enter n";
    cin >> n;
    
    m = n;
    while (n >0)
    {
        
        r = n % 10;
        n = n/10;
        sum = sum + r * r * r;
        cout << r << endl;
    }
    
    if(sum == m)
    {
        cout << "It's an armstrong";
    }
    else
    {
        cout << "not armstrong" << endl;
        
    }
    
    
    
    return 0;
}
