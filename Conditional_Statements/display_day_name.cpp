#include <iostream>

using namespace std;

int main()
{
    int day;
    
    cout << "Enter the day number" << endl;
    cin >> day;
    
    if(day == 1)
    {
        cout << "Mon" << endl;
    }
    else if(day == 2)
    {
        cout << "Tues" << endl;
    }
    else if(day == 3)
       {
           cout << "Wed" << endl;
       }
    else if(day == 4)
       {
           cout << "Thurs" << endl;
       }
    else if(day == 5)
       {
           cout << "Fri" << endl;
       }
    else if(day == 6)
       {
           cout << "Sat" << endl;
       }
     else if(day == 7)
       {
           cout << "Sun" << endl;
       }
     else{
         cout << "invalid";
     }
    
    
    
    return 0;
}
