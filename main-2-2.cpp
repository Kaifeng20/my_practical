#include <iostream>
using namespace std;

int main(){
    Person p1(100,"test1"),p2(200,"test2"),p3(300,"test3"),p4(400,"test4");
    cout << "before setting p1 " << p1.getName() <<" " << p1.getSalary() << endl;

    p1.setName("person1");

    p1.setSalary(1000);

    cout << "after setting p1  " << p1.getName() <<" " << p1.getSalary() << endl;
}