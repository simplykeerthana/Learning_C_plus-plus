// a program to calculate the net salary based on basic salary, percentage of allowances, and percentage of deduction


// Net salary = basic salary + (basic salry * percent allow )-(basic salary * percent deductions )

#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    float basic, percent_allow, percent_deduct, net_salary;

    cout<<"Enter your basic salary: ";
    cin>> basic;
    cout<<"Enter percent of allowances: ";
    cin >> percent_allow;
    cout<<"Enter percent of Deductions: ";
    cin >> percent_deduct;

    net_salary = basic+basic*percent_allow/100-basic*percent_deduct/100;

    cout<<"Your Net Salary is: " << net_salary <<endl;
    return 0;
}
