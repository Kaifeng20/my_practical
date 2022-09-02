#include <iostream>
using namespace std;
#include <string>

class Capybara{
public:
    string name;
    int age;

    void setName(string capyName);

    string getName();

    void setAge(int capyAge);

    int getAge();
};