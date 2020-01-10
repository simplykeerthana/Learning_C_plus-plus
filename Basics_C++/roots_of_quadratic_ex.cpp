// this program finds the roots of a quadraitic equation 
// ax^2 + bx + c = 0
// variables a, b, c

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   float a, b, c;
   float r1, r2, discriminant;
   
   discriminant = b*b - 4*a*c;


    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;
    
    r1 = (-b + sqrt(discriminant)) / (2*a);
    r2 = (-b - sqrt(discriminant)) / (2*a);

    cout << "The roots are " << r1 <<" and " << r2;

    return 0;
}