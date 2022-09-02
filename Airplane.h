#include <iostream>
using namespace std;
#include "Person.h"

class Airplane
{
private:
    Person ap[3];

    int num;
    int count;

public:
    Airplane(string callsign, Person thePilot, Person theCoPilot);
    void setPilot(Person thePilot);      // change the pilot
    Person getPilot();
    void setCoPilot(Person theCoPilot);  // change the co-pilot
    Person getCoPilot();
    void printDetails()
};