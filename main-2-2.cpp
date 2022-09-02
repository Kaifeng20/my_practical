#include <iostream>
using namespace std;
#include "Person.h"
#include "Airplane.h"

int main() {
    
    Person p1(100,"Anderson");
    
    Person p2(200,"Jones");
    
    Person p3(300,"Williams");
    
    Airplane a("sign 1",p1,p2);
    
 
    a.printDetails();
    
    a.setPilot(p3);
    a.printDetails();
    
    a.setCoPilot(p1);
    a.printDetails();
    return 0;
}