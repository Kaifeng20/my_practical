#include <iostream>
using namespace std;

extern int is_identity(int array[10][10]);

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

    cout<<"Matrix of integers: "<<is_identity(array)<<endl;

    return 0;
}