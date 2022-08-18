#include<iostream>
using namespace std;

int max_sub_sum(int *nums,int length){
    
    int maxFar = INT_MIN;
    int maxEnd = 0;
    
    for (int i = 0; i < length; i++){
        
        int maxEnd = maxEnd + nums[i];
        if (maxFar < maxEnd)
            maxFar = maxEnd;
        
        else if (maxEnd < 0)
            maxEnd = 0;
        }
    return maxFar;
}

int main(){
    int arr[] = { 31, -41, 59, 26, -53, 58, 97, -93, -23, 84 };
    int n = sizeof(arr)/sizeof(arr[0]);
    int maxSum = max_sub_sum(arr, n);
    
    cout << maxSum;
    return 0;
}
