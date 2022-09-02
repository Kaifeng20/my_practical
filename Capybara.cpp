#include <iostream>
using namespace std;
#include <string>
#include "Capybara.h"

Capybara::Capybara()
{
    name = "?";
    age = 3;
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
    capyAge = age;
}

int Capybara::setAge()
{
    return age;
}


