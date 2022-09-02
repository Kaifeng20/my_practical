#include <iostream>
using namespace std;
#include <string>

class Capybara{
public:
    Capybara();
    string name;
    int age;

    void setName(string capyName);

    string getName();

    void setAge(int capyAge);

    int getAge();
};