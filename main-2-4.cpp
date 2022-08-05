#include <iostream>
using namespace std;

extern int sum_min_max(int integers[], int length);
extern int array_min(int integers[], int length);
extern int array_max(int integers[], int length);


int main(){

    int integers[6] = {2,3,4,5,6,7};
    cout << "Sum of max and min : " << sum_min_max(integers, 6);
    cout << endl;
}
