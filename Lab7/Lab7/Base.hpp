//
//  Base.hpp
//  Lab7
//
//  Created by Brenna Pavlinchak on 10/17/22.
//
#ifndef BASE_CPP
#define BASE_CPP
#include <iostream>
#include <cstring>
#include <iostream>
#include <cstring>

using namespace std;
class Base
{
private:
    char *member;
public:
    Base();
    void SetName(string name);
    char *GetName();
    virtual void DisplayRecord() = 0;

    ~Base();

    Base(Base &copy);

    Base &operator=(const Base &copy);
};

Base::Base()
{
    member = nullptr;
}

void Base::SetName(string name)
{
    int len = name.length();

    member = new char[len + 1];

    strcpy(member, name.c_str());
}
char *Base::GetName()
{
    return member;
}

Base::~Base()
{
    if (member != nullptr)
        delete member;
}

Base::Base(Base &copy)
{
    *this = copy;
}

Base &Base::operator=(const Base &copy)
{
    return *this;
}

#endif/* Base_hpp */
