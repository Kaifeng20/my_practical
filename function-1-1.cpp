#include <iostream>
using namespace std;

int sum_diagonal(int array[4][4])
{
    int sum = 0;

    for(int i = 0; i<4; i++)
    {
    for(int j=0; j<4; j++)
    {
    sum += array[4-i-1][4-j-1];

    }
    }
    return sum;

}


//--------//
// int main(){
//     int array[4][4] = {
//         {0,1,2,1},
//         {2,3,4,5},
//         {3,4,5,6},
//         {4,5,6,7}
//         };

//     cout<< "The sum of the elements along the main diagonal is: " << sum_diagonal(array) << endl << endl;    

//     return 0;
// }
