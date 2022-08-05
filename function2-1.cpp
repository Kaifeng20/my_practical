#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

void print_binary_str(std::string decimal_number)
{
    int num = stoi(decimal_number);

    for(int i=31; i>=0 ; i--)
    {
        cout << ((num >> i) & 1) ;
    }
    cout << endl;
}

// int main()
// {
//     string number = "3.3333";
//     print_binary_str(number);
// }