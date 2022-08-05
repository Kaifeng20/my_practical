#include <iostream>
using namespace std;

int is_identity(int array[10][10]){
    for(int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == j)
            {
                if (array[i][j] != 1)
                return 0;
            }
            else if (i != j)
            {
                if (array[i][j] != 0)
                {
                    return 0;
                }
            }

            else
            {
                return 1;
            }
        }
    }
}


//------//
// extern int is_identity(int array[10][10]);

// int main(){
//     int array[10][10] = {
//     {1,0,0,0,0,0,3,0,0,0}, 
//     {0,1,0,0,0,0,0,0,0,0}, 
//     {0,0,1,0,0,0,0,0,0,0}, 
//     {0,0,0,1,0,0,0,0,0,0}, 
//     {0,0,0,0,1,0,0,0,0,0}, 
//     {0,0,0,0,0,1,0,0,0,0}, 
//     {0,0,0,0,0,0,1,0,0,0}, 
//     {0,0,0,0,0,0,0,1,0,0}, 
//     {0,0,0,0,0,0,0,0,1,0}, 
//     {0,0,0,0,0,0,0,0,0,1}, 
// }; 

//     cout<<"Matrix of integers: "<<is_identity(array)<<endl;
//     return 0;
// }