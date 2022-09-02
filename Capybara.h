#include <iostream>
using namespace std;
#include <string>

class Capybara
{
private:
    // variable to store the  name and the age of the capybara
    string name;
    int age;

public:
    Capybara();
    Capybara(string name, int age);

    // getters functions
    string getName();
    int getAge();
};