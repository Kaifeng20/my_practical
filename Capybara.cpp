#include "Capybara.h"

Capybara::Capybara()
{
    // intialising the data members with the default name and age
    this->name = "cp0";
    this->age = 14;
}

// parameteried constructor
Capybara::Capybara(string name, int age)
{
    // intialising the data members with the passed name and age
    this->name = name;
    this->age = age;
}

// function to get the name of the capybara
string Capybara::getName()
{
    // returning the name of the cabybara
    return this->name;
}

// fucntion to get the age of the capybara
int Capybara::getAge()
{
    // returning the age of the capybara
    return this->age;
}