// bitwise concepts in C++

#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int a = 11, b = 7, c;
    c = a&b;
    cout <<" a&b = " <<c << endl;

    int d= 11, e=7, f;
    f = d | e;
    cout << "f = d | e " << f << endl;

    int g=11, h=7, i;
    i= g^h;
    cout << "i = g^h" << i << endl;

    char j=5, k;
    k=j<<1;
    cout<< "j<<1 " <<(int)k<<endl;
    char l=20,m;
    m=l>>1;
    cout<< " m = l>>1 " <<(int)m<<endl;
    char x=5,y;
    y= ~ x;
    cout<< " y = ~x" <<(int)y<<endl;
 



    return 0;
}