#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

extern int binary_to_int(int binary_digits[], int number_of_digits);

int main(){
    
    int array[30] = {0,0,0,0,0,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1}; 
    
    cout <<binary_to_int(array,30)<< endl;
    return 0;
}