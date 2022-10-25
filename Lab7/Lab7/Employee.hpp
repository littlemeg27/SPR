//
//  Employee.hpp
//  Lab7
//
//  Created by Brenna Pavlinchak on 10/21/22.
//

#ifndef EMPLOYEE_CPP
#define EMPLOYEE_CPP
#include "Base.hpp"

class Employee : public Base
{
private:
    int salary; //salary of the employee

public:
    Employee(string name, int salary);
    void SetSalary(int sal);
    int GetSalary();
    void DisplayRecord()
    {
        cout << "Employee name: " << GetName() << ", salary : " << salary << endl;
    }
    //rule of three
    //(1) destructor
    ~Employee();

    //(2) copy constructor
    Employee(Employee &copy);

    //(3) copy assignment operator
    Employee &operator=(const Employee &copy);
};

Employee::Employee(string name, int salary)
{
    SetName(name);
    SetSalary(salary);
}
void Employee::SetSalary(int sal)
{
    this->salary = sal;
}
int Employee::GetSalary()
{
    return salary;
}
//rule of three
//(1) destructor
Employee::~Employee()
{
}

//(2) copy constructor
Employee::Employee(Employee &copy)
{

    SetName(copy.GetName());
    SetSalary(copy.GetSalary());
}

//(3) copy assignment operator
Employee &Employee::operator=(const Employee &copy)
{
    return *this;
}

#endif /* Employee_hpp */
