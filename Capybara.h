#include <iostream>
using namespace std;
#include <string>

class Capybara{
public:
    string name;
    int age;

    void setName(string capyName)
    {
        capyName = name;
    }

    string getName()
    {
        return name;
    }

    void setAge(int capyAge)
    {
        capyAge = age;
    }

    int getAge()
    {
        return age;
    }
};