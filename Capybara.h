#include <iostream>
using namespace std;
#include <string>

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