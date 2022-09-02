#include <iostream>
using namespace std;
#include <string>
#include "person.h"

int main()
{
Person p1(100,"test1"),p2(200,"test2"),p3(300,"test3"),p4(400,"test4");

    //before setting there pay be a garbage value in it...

    cout << "before setting p1 " << p1.getName() <<" " << p1.getSalary() << endl;

    p1.setName("person1");

    p1.setSalary(1000);

    cout << "after setting p1  " << p1.getName() <<" " << p1.getSalary() << endl;

    

    cout << "before setting p2 " << p2.getName() <<" " << p2.getSalary() << endl;

    p2.setName("person2");

    p2.setSalary(2200);

    cout << "after setting p2  " << p2.getName() <<" " << p2.getSalary() << endl;

    

    cout << "before setting p3  " << p3.getName() <<" " << p3.getSalary()<< endl;

    p3.setName("person3");

    p3.setSalary(2100);

    cout << "after setting p3  " << p3.getName() <<" " << p3.getSalary() << endl;

    

    cout << "before setting p4  " << p4.getName() <<" " << p4.getSalary() << endl;

    p4.setName("person4");

    p4.setSalary(3200);

    cout << "after setting p4  " << p4.getName() <<" " << p4.getSalary() << endl;

 

    return 0;

}