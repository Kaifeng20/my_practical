#include "person.h"


Person::Person(int mySalary, string myName)
{
    name = myName;
    salary = mySalary;
}

void Person::setName(string myname)
{
    name = myname;
}

string Person::getName()
{
    return name;
}

void Person::setSalary(int mySalary)
{
    salary = mySalary;
}

int Person::getSalary()
{
    return salary;
}