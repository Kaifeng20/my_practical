#include <iostream>
using namespace std;


int array_max(int integers[], int length)
{
    int max=0;
    for(int i=0; i<length; i++)
    {
        if(max < integers[i])
        {
            max = integers[i];
        }
    }

    return max;
}

int array_min(int integers[], int length)
{
    int min =integers[0];
    for(int i=0; i<length; i++)
    {
        if(min > integers[i])
        {
            min = integers[i];
        }
    }

    return min;
}


int sum_min_max(int integers[], int length)
{
    int array1 = 0;
    int array2 = 0;
    int sum = 0;
    array1 = array_max(integers, length);
    array2 = array_min(integers, length);
    sum = array1 + array2;
    return sum;
}



