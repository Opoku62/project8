# include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    double hourlyRate;
    double hoursWorked;

public:
    Employee(string n, double rate, double hours)
        : name(n), hourlyRate(rate), hoursWorked(hours) {}

    double calculateSalary() {
        return hourlyRate * hoursWorked;
    }

    void displayInfo() {
        cout << "Employee: " << name << endl;
        cout << "Hourly Rate: $" << hourlyRate << endl;
        cout << "Hours Worked: " << hoursWorked << " hours" << endl;
        cout << "Total Salary: $" << calculateSalary() << endl;
    }
};

int main() {
    string employeeName;
    double hourlyRate, hoursWorked;

    cout << "Enter employee name: ";
    cin >> employeeName;

    cout << "Enter hourly rate: ";
    cin >> hourlyRate;

    cout << "Enter hours worked: ";
    cin >> hoursWorked;

    Employee employee(employeeName, hourlyRate, hoursWorked);
    employee.displayInfo();

    return 0;
}
