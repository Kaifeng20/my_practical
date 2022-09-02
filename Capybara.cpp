#include "Capybara.h"

Capybara::Capybara()
{
    // intialising the data members with the default name and age
    this->name = "cp0";
    this->age = 14;
}

void Capybara::setName(string capyName)
{
    name = capyName;
}

string Capybara::getName()
{
    return name;
}

void Capybara::setAge(int capyAge)
{
    age = capyAge;
}

int Capybara::getAge()
{
    return age;
}


