// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void pattern(int n){
    
        for(int i=0; i<=n;i++){
            for(int j=0; j<n-i-1; j++){
                cout << " ";
            }
            
            char ch ='A';
            int breakpoint = (2*i+1)/2;
            
            for(char k=1 ; k<=(2*i) + 1; k++){
                cout << ch;
                if(k <= breakpoint) ch++;
                else ch--;
            }
            cout << endl;
        }
    
}

int main() {
    int n = 5;
    pattern(n);

    return 0;
}