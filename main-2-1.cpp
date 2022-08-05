#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

extern void print_binary_str(std::string decimal_number);

int main()
{
    string number = "3.3333";
    print_binary_str(number);
}