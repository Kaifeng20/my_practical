#include <iostream>
using namespace std;


int main() {
    string first[3][2] = {{"Jiang Xi","Is myHome"}, {"Australia","Adelaide"}, {"Beijing","China"}};
    
    string second[3][2];
    string_2d_copy(first, second, 3);
    
    cout<<"This value is: "<<endl<<endl;
    
    for(int i=0; i<3; i++) {
        for(int j=0; j<2; j++) {
            
            cout<<second[i][j]<<" ";
            }
        
        cout<<endl;
        
        }
    return 1;
}

