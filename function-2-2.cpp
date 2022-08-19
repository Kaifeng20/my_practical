#include <iostream>
using namespace std;

int max_sub_sum(int *nums,int length){
    int max_so_far = INT8_MIN, max_ending_here = 0;
    
    for (int i = 0; i < length; i++){
        max_ending_here = max_ending_here + nums[i];
        if (max_so_far < max_ending_here)
            
            max_so_far = max_ending_here;
        if (max_ending_here < 0)
            
            max_ending_here = 0;
        }
    return max_so_far;
}