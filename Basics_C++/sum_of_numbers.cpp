// this program caluculates the sum of first n  natural numbers

#include <iostream>

using namespace std;

int main()
{
    int n, sum;
    cout<<"Enter n to take the sum of it: ";
    cin >> n;

    sum = n*(n+1)/2;

    cout << "The sum of n is: " << sum;

}