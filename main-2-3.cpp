#include <iostream>
using namespace std;

extern int sum_if_palindrome(int integers[], int length);
extern bool is_palindrome(int integers[], int length);
extern int sum_array_elements(int integers[], int length);

int main(){
    
    
    int integers[6] = {4,5,4,4,5,4};
    cout << "Sum of elements: " << sum_array_elements(integers, 6);
    cout << endl << endl;
    if( sum_if_palindrome(integers, 6) == -2)
    {
        cout << "not palindrome " << endl;
    }    
    else
    {
        cout << "sum of palindrome: " << sum_if_palindrome(integers, 6);
        cout << endl << endl;    
    }
}
