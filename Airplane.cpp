#include "Person.h"
#include "Airplane.h"

Airplane::Airplane(string callsign, Person thePilot, Person theCoPilot)
{
    this->callsign = callsign;
    this->thePilot = thePilot;
    this->theCoPilot = theCoPilot;
}

void Airplane::setPilot(person thePilot)
{
    this->thePilot = thePilot; 
}

string irplane::getPilot()
{
    return thePilot;
}

void Airplane::setCoPilot(person theCoPilot)
{
    this->theCoPilot = theCoPilot; 
}

string irplane::getCoPilot()
{
    return theCoPilot;
}

void irplane::printDetails()
{
    cout<<callsign<<"\n"<<"Pilot : "<<thePilot.getFirstName()<<"  "<<thePilot.getLastName()<<"\n"<<"CoPilot : "<<theCoPilot.getFirstName()<<"  "<<theCoPilot.getLastName()<<"\n";
}
