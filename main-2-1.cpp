#include <iostream>
using namespace std;
#include "Capybara.h"
#include "Wagon.h"

int main()
{
    // creating a wagon object
    Wagon wg;

    // creating 5 capybara objects
    Capybara cb1,cb2,cb3,cb4,cb5;

    //cb1 data
    cb1.setName("cp1");
    cb1.setAge(5);

    //cb2 data
    cb2.setName("cp2");
    cb2.setAge(4);

    //cb3 data
    cb3.setName("cp3");
    cb3.setAge(3);

    //cn4 data
    cb4.setName("cp4");
    cb4.setAge(2);

    //cb5 data
    cb5.setName("cp5");
    cb5.setAge(1);


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

    cout << endl;
    // printing all the capybaras in the wagon
    wg.printCapybaras();

    cout << endl;
    // emptying the wagon
    cout << "Wagon is Emptying" << endl;
    wg.emptyWagon();


}