#include <iostream>
using namespace std;

void copy_doubles(double *old_array,double *new_array,int length);

int main(){
    double arr1[6]={1,2,3,4,5,6};
    double arr2[6];
    cpyda(arr1,arr2,6);
    
    for(int i=0;i<5;i++)
        cout<<*(arr2+i)<<" ";
    
}
