//
//  Employee.hpp
//  Lab7
//
//  Created by Brenna Pavlinchak on 10/21/22.
//

#ifndef STUDENT_CPP
#define STUDENT_CPP
#include "Base.hpp"

class Student : public Base
{
private:
    float gpa; //gpa of the student

public:
    Student(string name, float salary);
    void SetGpa(float sal);
    float GetGpa();
    void DisplayRecord()
    {
        cout << "Student name: " << GetName() << ", gpa : " << gpa << endl;
    }

    ~Student();

    Student(Student &copy);

    Student &operator=(const Student &copy);
};

Student::Student(string name, float gpa)
{
    SetName(name);
    SetGpa(gpa);
}
void Student::SetGpa(float gpa)
{
    this->gpa = gpa;
}
float Student::GetGpa()
{
    return gpa;
}

Student::~Student()
{
}

Student::Student(Student &copy)
{

    SetName(copy.GetName());
    SetGpa(copy.GetGpa());
}

Student &Student::operator=(const Student &copy)
{
    return *this;
}

#endif
