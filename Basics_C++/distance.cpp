// a program to calculate the distance between 2 point

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x1, y1, x2, y2;

    float distance;
    cout<< "Enter x1, x2 and y1, y2: ";
    cin >> x1 >> x2 >> y1 >> y2;
    distance = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    cout<< "the distance is " << distance;

    return 0;
}