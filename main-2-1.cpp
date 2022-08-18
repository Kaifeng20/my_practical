#include <iostream>
using namespace std;

extern void multiples_of_seven(int *nums,int length);

int main(){
    srand (time(NULL));
    int arr[40];
    int length=40;
    
    for(int i=0;i<50;i++){
        arr[i]=rand()%2000;
        cout<<arr[i]<<" ";
        }
    cout<<endl;
    cout<<"The muliple of sevens are --"<<endl;
    print_sevens(arr,length);
    
    return 0;
}
