#include <iostream>
using namespace std;

int main(){
    int array[10][10] = {
    {3,0,0,0,0,0,0,0,0,0}, 
    {0,1,0,0,0,0,0,0,0,0}, 
    {0,0,1,0,0,0,0,0,0,0}, 
    {0,0,0,1,0,0,0,0,0,0}, 
    {0,0,0,0,1,0,0,0,0,0}, 
    {0,0,0,0,0,1,0,0,0,0}, 
    {0,0,0,0,0,0,1,0,0,0}, 
    {0,0,0,0,0,0,0,1,0,0}, 
    {0,0,0,0,0,0,0,0,1,0}, 
    {0,0,0,0,0,0,0,0,0,1}, 
}; 

    if(is_identity(array) == 1) 
    { 
    cout << "Matrix of integers is Identity" << endl<< endl; 
    } 
    else 
    { 
    cout << "Matrix of integers is Not Identity" << endl<< endl; 
    } 
    return 0;
    }