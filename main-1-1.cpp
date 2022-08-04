#include <iostream>
using namespace std;

extern int diagonal(int array[4][4])

int main(){
    int test[4][4] = {{0,1,2,1},{2,3,4,5},{3,4,5,6},{4,5,6,7}};

    cout<< "The sum of the elements along the main diagonal is: " << diagonal(test) << endl << endl;    
}
