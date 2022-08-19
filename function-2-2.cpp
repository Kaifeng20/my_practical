#include<iostream>
using namespace std;

int max_sub_sum(int *nums,int length){
    
    Int maxFar = INT_MIN, maxEnd = 0;
    
    for (int i = 0; i < length; i++){
        
        maxEnd = maxEnd + arr[i];
        if (maxFar < maxEnd)
            maxFar = maxEnd;
        
        if (maxEnd < 0)
            maxEnd = 0;
        }
    return maxFar;
}



int max_sub_sum(int *nums,int length){
    
    int maxFar = INT8_MIN, maxEnd = 0;
    
    for (int i = 0; i < length; i++){
        
        maxFar = maxEnd + nums[i];
        if (maxFar < maxEnd)
            maxFar = maxEnd;
        
        if (maxEnd < 0)
            maxEnd = 0;
        }
    return maxFar;
}
