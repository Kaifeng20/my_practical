#include "Capybara.h"

void Capybara::setName(string capyName)
{
    capyName = name;
}

string Capybara::getName()
{
    return name;
}

void Capybara::setAge(int capyAge)
{
    capyAge = age;
}

int Capybara::getAge()
{
    return age;
}


// int main(){
//     Capybara c1;
//     c1.age = 3;
//     c1.name = "boy";

//     cout<< "Capybara name: "<< c1.getName()<<"Capybara age: "<< c1.getAge()<<endl;
// }