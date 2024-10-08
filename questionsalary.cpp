#include <iostream>
using namespace std;

// Base class
class Employee 
{
public:
    virtual double calculateSalary() const = 0; // Pure virtual function
    virtual ~Employee() {} // Virtual destructor
};

// Derived class FullTimeEmployee
class FullTimeEmployee : public Employee 
{
private:
    double monthlySalary;
public:
    FullTimeEmployee(double salary) : monthlySalary(salary) 
    {}

    double calculateSalary() const override 
    {
        return monthlySalary;
    }
};

// Derived class PartTimeEmployee
class PartTimeEmployee : public Employee 
{
private:
    double hourlyRate;
    int hoursWorked;
public:
    PartTimeEmployee(double rate, int hours) : hourlyRate(rate), hoursWorked(hours) 
    {}
    double calculateSalary() const override 
    {
        return hourlyRate * hoursWorked;
    }
};

// Function to display salary details
void displaySalary(Employee* emp) 
{
    cout << "Rs. " << emp->calculateSalary() << endl;
}

int main() 
{
    // Input for FullTimeEmployee
    double fullTimeSalary;
    cout << "Enter the monthly salary for the Full-Time Employee: Rs. ";
    cin >> fullTimeSalary;
    Employee* fullTime = new FullTimeEmployee(fullTimeSalary);

    // Input for PartTimeEmployee
    double hourlyRate;
    int hoursWorked;
    cout << "Enter the hourly rate for the Part-Time Employee: Rs. ";
    cin >> hourlyRate;
    cout << "Enter the number of hours worked by the Part-Time Employee: ";
    cin >> hoursWorked;
    Employee* partTime = new PartTimeEmployee(hourlyRate, hoursWorked);

    // Display salaries
    cout << "Full-Time Employee: ";
    displaySalary(fullTime);

    cout << "Part-Time Employee: ";
    displaySalary(partTime);

    // Clean up
    delete fullTime;
    delete partTime;

    return 0;
}