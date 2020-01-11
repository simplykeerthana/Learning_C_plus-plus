// calculating simple interest using c++

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float SI, p,t,r;

   

    cout << "Enter the three numbers ";
    cin >>p>>t>>r;
    SI= p*t*r/100.0;
    return 0;
}

