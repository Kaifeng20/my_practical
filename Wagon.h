#include <iostream>
using namespace std;

class Wagon
{
private:
    // array to store four capybara type object
    Capybara cb[4];

    // to store the count of capybara
    int count;

public:
    Wagon(); // create an empty wagon object

    // member functions
    bool isEmpty();                     // to check if wagon is empty or not
    bool addCapybara(Capybara newCapy); // adds a Capybara to the wagon, returns false if full
    void emptyWagon();                  // remove all Capybaras from the wagon
    void printCapybaras();              // print the name, a space, the age, then a new line for each capybara in the order they were added
};