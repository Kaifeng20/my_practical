#include "Wagon.h"
#include "Capybara.h"


Wagon::Wagon()
{
    this->count = 0;
}

// function to check if the wagon is empty or not
bool Wagon::isEmpty()
{
    return (count == 0);
}

// function to add a capybara to the wagon
bool Wagon::addCapybara(Capybara newCapy)
{
    // if the wagon is not full add the capybara to the wagon
    if (this->count < 4)
    {
        // adding the capybara to the wagon
        this->cb[this->count] = newCapy;

        // incrementing the count
        count++;

        // returning true
        return true;
    }
    else
    {
        // if the wagon if false returning false
        return false;
    }
}

// function to empty the wagon
void Wagon::emptyWagon()
{
    this->count = 0;
}

// function to print all the capybara in the wagon
void Wagon::printCapybaras()
{
    // printing the name and age of the all capybaras
    cout << "Capybaras in the Wagon are: " << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << this->cb[i].getName() << " " << this->cb[i].getAge() << endl;
    }
}
