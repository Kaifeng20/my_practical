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


