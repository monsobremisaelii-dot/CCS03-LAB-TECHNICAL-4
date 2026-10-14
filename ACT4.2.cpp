#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;


int main ()
{

string Payroll, ID, Name;
double Salary, Lates;
double hourlyRate, lateHours, lateAmount, Tax;
double Philhealth = 1000, Pagibig = 800, SSS = 1200;
double totalEarnings, totalDeductions, netPay;

//Input

cout << "Enter Payroll period: ";
getline(cin, Payroll);

cout << "Enter Employee ID: ";
getline(cin, ID);

cout << "Enter Employee Name: ";
getline(cin, Name);

cout << "Enter Monthly Salary: ";
cin >> Salary;

cout << "Enter Lates and Absences: ";
cin >> Lates;

//Process

hourlyRate = Salary / 30 / 8;
lateHours = Lates / 60;
lateAmount = hourlyRate * lateHours;
Tax = Salary * 0.12;

totalEarnings = Salary;
totalDeductions = Philhealth + Pagibig + SSS + Tax + lateAmount;
netPay = totalEarnings - totalDeductions;

//Output 

cout << fixed << setprecision(2) << left;
cout << endl;
cout << setw(20) << "             FEU - Institute of Technology" << endl;

cout << setw(36) << ("Employee ID: " + ID) << "Payroll Period: " << endl;

cout << "Employee Name: " << Name << endl << endl;

cout << setw(36) << "Income" << "Deductions" << endl;
cout << "Monthly Salary Php" << setw(18) << Salary << setw(21) << "Lates and Absences" << "(" << lateAmount << ")" << endl;

cout << setw (36) << "" << setw(21) << "Philhealth"        << "(" << Philhealth << ")" << endl;
cout << setw (36) << "" << setw(21) << "Pagibig"           << "(" << Pagibig << ")" << endl;
cout << setw (36) << "" << setw(21) << "SSS"               << "(" << SSS << ")" << endl;
cout << setw (36) << "" << setw(21) << "Tax"               << "(" << Tax << ")" << endl;


cout << "Total Earning: Php" << totalEarnings << endl;
cout << "Total Deductions: Php" << totalDeductions << endl;
cout << "Net Pay: Php" << netPay << endl;

return 0;
}
