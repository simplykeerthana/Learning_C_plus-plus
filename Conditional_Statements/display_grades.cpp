
#include <iostream>

using namespace std;

int main()
{
    int m1,m2,m3,Total;
    float avg;
    
    cout<<" Enter three subject grades" << endl;
    cin >> m1 >> m2 >> m3;
    
    Total = m1 + m2 + m3;
    
    avg = Total/3;
    
    if (avg >= 60)
    {
        cout << "A" << endl;
        
    }
    else if (avg >= 35 && avg <= 60)
    {
        cout << "B" << endl;
    }
    else
    {
        cout << "C" << endl;
    }
    
    return 0;
}
