// this program adds the two integers and stores it in a variable

#include <iostream>

using namespace std;

int main()
{

    int a,b,c;
    string name;

    cout<<"Please enter your name: ";
    //cin >> name;  this statement only reads in one word from the stream, for multiple word read in use getline()
    getline(cin, name); // first para the input stream, and the second para the store location
    cout<<"Please enter to numbers for addition: ";
    cin >> a >>b;
    c = a + b;

    cout<< name  <<" the result of a + b is  : " << c;
    
    return 0;
}