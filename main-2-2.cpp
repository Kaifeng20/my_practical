#include <iostream>
using namespace std;

extern int max_sub_sum(int *nums,int length);

int main(){
    int arr[] = { 31, -41, 59, 26, -53, 58, 97, -93, -23, 84 };
    int n = sizeof(arr)/sizeof(arr[0]);
    int maxSum = max_sub_sum(arr, n);
    
    cout << maxSum;
    return 0;
}