#include <iostream>
using namespace std;

extern void copy_integers(int old_array[],int new_array[],int length);

int main() {
    
    int old_array[] = {1,2,3,4,5,6,7,8,9,10};
    int new_array[10];
    copy_integers(old_array, new_array, 10);
    
    for(int i=0; i<10; i++)
        
        cout<<new_array[i]<<" ";
    cout<<endl;


return 0;

}