#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int binary_to_int(int binary_digits[], int number_of_digits)
{
    int number = 0;
    for(int i=0; i < number_of_digits; i++)
    {
        number = number | (binary_digits[i] << i);
    }
    return number;
}


//----------

// int main(){
    
//     int array[30] = {0,0,0,0,0,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1}; 
    
//     cout <<binary_to_int(array,30)<< endl;
//     return 0;
// }