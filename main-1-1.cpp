#include <iostream>
using namespace std;
#include <string>
#include "Capybara.h" 

int main()
{
    Capybara c1,c2,c3,c4;

    cout <<"before setting name: " << c1.getName() <<endl;

    c1.setName("test");

    cout <<"after setting name: " << c1.getName() <<endl;

    cout <<"before setting age: " << c1.getAge() <<endl;

    c1.setAge(23);

    cout <<"after setting age: " << c1.getAge() <<endl;

    cout << "before setting m2 " << c2.getName() <<" " << c2.getAge() << endl;

    c2.setName("test2");

    c2.setAge(22);

    cout << "after setting m2  " << c2.getName() <<" " << c2.getAge() << endl;

    

    cout << "before setting m3  " << c3.getName() <<" " << c3.getAge() << endl;

    c3.setName("test3");

    c3.setAge(21);

    cout << "after setting m3  " << c3.getName() <<" " << c3.getAge() << endl;

    

    cout << "before setting m4  " << c4.getName() <<" " << c4.getAge() << endl;

    c4.setName("test4");

    c4.setAge(32);

    cout << "after setting m4  " << c4.getName() <<" " << c4.getAge() << endl;

}