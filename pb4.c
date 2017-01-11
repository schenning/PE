#include <stdio.h>



int reverse(int n){
    int rev = 0;
    while(n !=0){
        rev = rev*10;
        rev = rev +n%10;
        n = n/10;
    }
    return rev;
}


int main(){

    int i,j, biggestProduct = 0;
    for (i=100;i<1000; i++){
        for (j=100;j<1000;j++){
            if (i*j == reverse(i*j) && i*j>biggestProduct){
                biggestProduct  = i*j;

            }
        }
    }

    printf("%i\n", biggestProduct);

return 0;
}
