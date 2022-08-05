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

    if (is_identity(array))
    {
        cout<<"This is identity marix"<<endl;
    }
    else
    {
        cout<<"This is not identity marix"<<endl;
    }

    return 0;
}