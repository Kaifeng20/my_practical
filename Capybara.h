#include <iostream>
using namespace std;
#include <string>
#ifndef Capybara_h
#define Capybara_h
class Capybara
{
private:
    string name;
    int age;


public:

    void setName(string capyName);

    string getName();

    void setAge(int capyAge);

    int getAge();
};
#endif