#include <iostream>
using namespace std;
#include "Capybara.h"
#include "Wagon.h"

int main()
{
    cout << "*****| Program Started |*****" << endl;

    // creating a wagon object
    Wagon wg;

    // creating 5 capybara objects
    Capybara cb1("cp1", 3);
    Capybara cb2("cp2", 4);
    Capybara cb3("cp3", 5);
    Capybara cb4("cp4", 2);
    Capybara cb5("cp5", 1);

    // checking if initially wagon is empty or not
    cout << "\n(Initially) isWagon Empty (1 -> true | 0 -> false): " << wg.isEmpty() << endl;

    // adding capybaras to the wagon
    cout << "\nAdding Capybaras to the Wagon: " << endl;
    bool isAdded = wg.addCapybara(cb1);
    if (!isAdded)
    {
        cout << "Wagon is Full. Can't add anymore Capybaras." << endl;
    }
    else
    {
        cout << "Capybara added" << endl;
    }

    isAdded = wg.addCapybara(cb2);
    if (!isAdded)
    {
        cout << "Wagon is Full. Can't add anymore Capybaras." << endl;
    }
    else
    {
        cout << "Capybara added" << endl;
    }

    isAdded = wg.addCapybara(cb3);
    if (!isAdded)
    {
        cout << "Wagon is Full. Can't add anymore Capybaras." << endl;
    }
    else
    {
        cout << "Capybara added" << endl;
    }

    isAdded = wg.addCapybara(cb4);
    if (!isAdded)
    {
        cout << "Wagon is Full. Can't add anymore Capybaras." << endl;
    }
    else
    {
        cout << "Capybara added" << endl;
    }

    isAdded = wg.addCapybara(cb5);
    if (!isAdded)
    {
        cout << "Wagon is Full. Can't add anymore Capybaras." << endl;
    }
    else
    {
        cout << "Capybara added" << endl;
    }

    // checking if wagon is empty or not
    cout << "\nisWagon Empty (1 -> true | 0 -> false): " << wg.isEmpty() << endl;

    cout << endl;
    // printing all the capybaras in the wagon
    wg.printCapybaras();

    cout << endl;
    // emptying the wagon
    cout << "**Emptying the Wagon" << endl;
    wg.emptyWagon();

    // checking if wagon is empty or not
    cout << "\nisWagon Empty (1 -> true | 0 -> false): " << wg.isEmpty() << endl;

    cout << "\n*****| Program Ended |*****" << endl;

    return 0;
}