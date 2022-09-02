#include <iostream>
using namespace std;
#include <string>

class Capybara{
public:
    string name;
    int age;

    void setName(std::string capyName);
    
    string getName();

    void setAge(int capyAge);

    int getAge();
};