// A program to calculate the area of a triangle


#include <iostream>
using namespace std;

int main()
{
    float a,b,h;
    cout <<" Enter base and height: ";
    cin >> b >> h;
    a = (b*h)/2;
    cout << "The area of the triangle is " << a;

    return 0;
}