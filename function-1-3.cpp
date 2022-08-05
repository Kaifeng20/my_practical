#include <iostream>
using namespace std;

void count_digits(int array[4][4]){
    int num[10] = {0}; 

    for(int i=0; i<4; i++) 
    { 
        for(int j=0; j<4; j++)
        { 
            switch(array[i][j]) 

            { 
                case 0: 
                num[0] += 1; 
                break; 

                case 1: 
                num[1] += 1; 
                break; 

                case 2: 
                num[2] += 1; 
                break; 

                case 3: 
                num[3] += 1; 
                break; 

                case 4: 
                num[4] += 1; 
                break; 

                case 5: 
                num[5] += 1; 
                break; 

                case 6: 
                num[6] += 1; 
                break; 

                case 7: 
                num[7] += 1; 
                break; 

                case 8: 
                num[8] += 1; 
                break; 

                case 9: 
                num[9] += 1; 
                break; 
            } 
        } 
    } 
    for(int i=0; i<10; i++) 
    { 
        cout << i << ":" << num[i] << ";"; 
    } 
    cout << endl;

}


int main(){
    int array[4][4] = {
        {1,2,3,4},
        {1,2,3,4},
        {1,2,3,4},
        {1,2,3,4}
    };
    count_digits(array);
    cout<<endl;

}