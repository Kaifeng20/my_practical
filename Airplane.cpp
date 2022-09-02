#include "Person.h"
#include "Airplane.h"

Airplane::Airplane(string callsign, Person thePilot, Person theCoPilot)
{
    num = callsign;
    name = thePilot;
    coPilot = theCoPilot;
}




void Airplane::setPilot(Person thePilot);      // change the pilot
{
    name = thePilot
}




Person getPilot();
void setCoPilot(Person theCoPilot);  // change the co-pilot
Person getCoPilot();
void printDetails()