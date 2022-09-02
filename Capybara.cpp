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

// int main(){
//     Capybara c1;
//     c1.age = 3;
//     c1.name = "boy";

//     cout<< "Capybara name: "<< c1.getName()<<"Capybara age: "<< c1.getAge()<<endl;
// }