#include <iostream>

using namespace std;


int main()
{

    int n, i, fact=1;
    
    cout << "Enter n: ";
    cin >> n;
    
    for(i=1; i<=n; i++)
    {
    
        fact *= i; // when multiplying never start with 0 because the result will always be zero
    }
    
    cout << "The Factorial of " << n  << " is " << fact << endl;

    return 0;
}
