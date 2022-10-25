#include <iostream>
#include <vector>
#include "Base.hpp"
#include "Employee.hpp"
#include "Student.hpp"

using namespace std;


int menu();
void AddRecord(vector<Base *> &v);
void DisplayRecords(vector<Base *> &v);
void DuplicateRecord(vector<Base *> &v);

int main()
{
    vector<Base *> members;

    int choice;
    do
    {
        choice = menu();

        switch (choice)
        {
        case 1:
            AddRecord(members);
            break;
        case 2:
            DisplayRecords(members);
            break;
        case 3:
            DuplicateRecord(members);
            break;
        case 0:
            cout << "Thank You for using my application\n";
            break;

        default:
            cout << "Incorrect choice....\n";
            break;
        }
    } while (choice != 0);

    cout << endl;
    return 0;
}

int menu()
{
    int choice;
    do
    {
        cout << "\n***********MENU*************\n";
        cout << "Enter 1 to add a record" << endl;
        cout << "Enter 2 to display all records" << endl;
        cout << "Enter 3 to duplicate a record" << endl;
        cout << "Enter 0 to exit" << endl;
        cout << "Enter your choice:  ";
        cin >> choice;

        if (choice < 0 || choice > 3)
        {
            cout << "Incorrect choice....\n";
        }
    } while (choice < 0 || choice > 3);
    return choice;
}
void AddRecord(vector<Base *> &v)
{
    string name;
    int ch;

    do
    {
        cout << "Enter the type of member [ 1 for employee/2 for student]: ";
        cin >> ch;
        cin.ignore();

        if (ch < 1 || ch > 2)
        {
            cout << "Please enter correct input..." << endl;
        }
    } while (ch < 1 || ch > 2);

    if (ch == 1)
    {
        int salary;
        cout << "Enter name of the employee: ";
        getline(cin, name);
        cout << "Enter salary of the employee: ";
        cin >> salary;
        Employee *emp = new Employee(name, salary);
        v.push_back(emp);
    }
    else if (ch == 2)
    {
        float gpa;
        cout << "Enter name of the student: ";
        getline(cin, name);
        cout << "Enter gpa of the student: ";
        cin >> gpa;
        Student *st = new Student(name, gpa);
        v.push_back(st);
    }
}

void DisplayRecords(vector<Base *> &v)
{
    if (v.size() == 0)
    {
        cout << "No record found..." << endl;
        return;
    }
    for (auto elem : v)
    {
        Employee *test = dynamic_cast<Employee *>(elem);

        if (test)
        {
            //Employee
            cout << "\nType of Member: Employee" << endl;
        }
        else
        {
            //Student
            cout << "\nType of Member: Student" << endl;
        }
        elem->DisplayRecord();
    }
}

void DuplicateRecord(vector<Base *> &v)
{
    int index = 0;
    cout << "Please enter the index to duplicate [start from 0]: ";
    cin >> index;
    cin.ignore();

    if (index < 0 || index >= v.size())
    {
        cout << "index " << index << " does not exist...\n";
        return;
    }
    Base *elem = v.at(index);
    Employee *test = dynamic_cast<Employee *>(elem);

    if (test)
    {
        //Employee
        Employee *newEmp = new Employee(*test);
        v.push_back(newEmp);
        cout << newEmp->GetName() << " has been duplicated...\n";
    }
    else
    {
        Student *test = dynamic_cast<Student *>(elem);
        //Student
        Student *newSt = new Student(*test);
        v.push_back(newSt);
        cout << newSt->GetName() << " has been duplicated...\n";
    }
}
