
#include <iostream>

using namespace std;

int main()
{
    cout <<"Menu\n";
    cout << "1. Add\n" << "2. Sub\n" << "3. Mul\n" << "4. Div\n" ;
    
    int option;
    cout << "enter your choice";
    cin >> option;
    int a,b,c;
    cout << "enter 2 numbers";
    cin >> a >>b;
    
    switch (option)
    {
        case 1: c = a+ b;
                cout << c;
                break;
        case 2: c = a - b;
                cout << c;
                break;
        case 3: c = a*b;
                cout << c;
                break;
        case 4: c = a/b;
                break;
        default: cout <<" not valid option";
            break;
                
}
    
    
    return 0;
    
}

