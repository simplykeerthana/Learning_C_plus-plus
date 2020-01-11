/* enum and type defs in c++
 words can be represented using numerical literalls

 For example departments - enum
enum dept {cs=1. ece, it, civil}
 user defiened type
enum days {mon, tue, wed, thu, fri, sat, sun};

 mon will have 0, tue will be 1 and etc

*/

/*
    typedef is to create types of an struct. 

    typedef int marks;

    marks m1, m2, m3; // to reduce initializing an object again and agian
*/

#include <iostream>

using namespace std;

enum day{mon, tue, wed, thu, fri, sat, sun};

int main()
{
    
    day d;
    d = mon;

    cout<<mon << tue << endl;

    cout<<mon<<endl;
    cout<<tue<<endl;
    cout<<wed<<endl;
    cout<<thu<<endl;
    cout<<fri<<endl;
    cout<<sat<<endl;
    cout<<sun<<endl;
   



    return 0;
}



