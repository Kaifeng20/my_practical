#include <iostream>
using namespace std;
#include <string>
#include "Capybara.h" 

int main(){
    
    Capybara c1;
    c1.age = 3;
    c1.name = "boy";

    cout<< "Capybara name: "<< c1.getName()<<endl;
    cout<< "Capybara age: "<< c1.getAge()<<endl;
}