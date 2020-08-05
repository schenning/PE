#include <iostream>
#include "math.h"

using namespace std; 

bool isDivisible (int n);

int main() {

int n=11;
while (isDivisible(n) == 0){
    n++;
}
cout << n << endl;


return 0;
}


bool isDivisible(int n){
    for (int i=11; i<20;i++){
        if(n%i != 0){
            return 0;
        }

    }
    return 1;
}
