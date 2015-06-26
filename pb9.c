#include <stdio.h>

void pb9();

int main(){
  
  pb9();

return 0;
}


void pb9(){

  int a,b,c;
  for(a=0;a<500;a++){
    for(b=0;b<500;b++){
      for(c=0;c<500;c++){
         if(a*a + b*b==c*c  && a+b+c==1000){
          printf("%d\n", a*b*c);
          return;
        }     
      }
    }
  }
}
