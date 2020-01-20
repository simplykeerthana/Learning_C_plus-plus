#include <iostream>

using namespace std;

int main ()
{
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;
    
    if(x > y)
    {
        cout << "Max is " << x;
    }
    else
    {
        cout << "Max is " << y;
    }
    


    return 0;
}