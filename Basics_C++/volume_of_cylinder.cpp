// a program to calculate the volume of a cylinder

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int radius, height;
    float volume;

    cout<< "Enter the radius and height";
    cin>> radius >> height;
    volume = 3.14*radius*radius*height;
    cout << "The volume of a cylinder is: " << volume;

    return 0;
}

