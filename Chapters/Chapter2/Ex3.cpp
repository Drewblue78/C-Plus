#include <iostream>
using namespace std;
int main() {
  char ans;
  do {
    double annualSalary, newAnnualSalary, monthlySalary, newMonthlySalary,
        amountDue, numberOfMonths;
    const float RAISE = 0.076;
    cout << "Press return after entering a number. \n";
    cout << "Enter the annual salary: \n";
    cin >> annualSalary;
    cout << "Enter how many months: \n";
    cin >> numberOfMonths;
    monthlySalary = annualSalary / 12;
    newAnnualSalary = annualSalary * RAISE + annualSalary;
    newMonthlySalary = newAnnualSalary / 12;
    amountDue = numberOfMonths * (newMonthlySalary - monthlySalary);

    cout << "The amount due is: ";
    cout << "$";
    cout << amountDue << endl;
    cout << "Do you want to begin again?";
    cin >> ans;
  } while (ans == 'y' || ans == 'Y');
  cout << "Have a nice day. \n";
  return 0;
}