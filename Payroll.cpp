#include <iostream>
using namespace std;

int main()
{
    string name;
    int empNo;
    float salary, house, transport, gross, tax, net;

    cout << "Enter employee name: ";
    cin >> name;

    cout << "Enter employee number: ";
    cin >> empNo;

    cout << "Enter basic salary: ";
    cin >> salary;

    house = salary * 0.20;
    transport = salary * 0.10;

    gross = salary + house + transport;
    tax = gross * 0.15;
    net = gross - tax;

    cout << "\n========== PAYSLIP ==========\n";
    cout << "Name: " << name << endl;
    cout << "Employee No: " << empNo << endl;
    cout << "Basic Salary: " << salary << endl;
    cout << "House Allowance: " << house << endl;
    cout << "Transport Allowance: " << transport << endl;
    cout << "Tax: " << tax << endl;
    cout << "Net Pay: " << net << endl;

    return 0;
}
