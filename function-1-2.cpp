#include <iostream>
using namespace std;

int is_identity(int array[10][10]){
    for(int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (j == i && array[i][j] != 1)
                return 0;

            else if(i != j && array[i][j] != 0)
                return 0;
        }
    }
    return 0;
}


//------//
// extern int is_identity(int array[10][10]);

// int main(){
//     int array[10][10] = {
//     {1,0,0,0,0,0,0,0,0,0}, 
//     {0,1,0,0,0,0,0,0,0,0}, 
//     {0,0,1,0,0,0,0,0,0,0}, 
//     {0,0,0,1,0,0,0,0,0,0}, 
//     {0,0,0,0,1,0,0,0,0,0}, 
//     {0,0,0,0,0,1,0,0,0,0}, 
//     {0,0,0,0,0,0,1,0,0,0}, 
//     {0,0,0,0,0,0,0,1,0,0}, 
//     {0,0,0,0,0,0,0,0,1,0}, 
//     {0,0,0,0,0,0,0,0,0,1}, 
//     }; 

//     std::cout << is_identity(array) << std::endl;
//     return 0;
// }