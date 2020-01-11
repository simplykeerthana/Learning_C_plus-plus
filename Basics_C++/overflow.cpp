// Overflow program in C++;

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    char a = 128; // this is an implicit conversion from int to char
    cout << a << endl;
    char b=127;
    cout <<b<< endl;
    char c=129;
    cout <<c<<endl;
    char d=128;
    d--;
    cout <<(int)d<< endl;

    int e=INT_MAX;
    e++;
    cout<<(int)e<<endl;



    return 0;


}